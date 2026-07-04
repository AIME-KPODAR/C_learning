#define SDL_MAIN_HANDLED
#include <SDL2/SDL.h>
#include <glad/glad.h>
#include <stdio.h>
#include <math.h>

const int WIN_WIDTH = 1050;
const int WIN_HEIGHT = 800;

// Cube
float cubeX = 0.0f;
float cubeY = 0.0f;
float cubeZ = -3.0f;
float rotX = 0.0f;
float rotY = 0.0f;
float speed = 0.02f;

// Limites de déplacement
const float limitX = 2.0f;
const float limitY = 2.0f;

// Modes
int moveEnabled = 1;  // déplacement actif
int rotateEnabled = 1; // rotation active

// Dessiner le cube
void drawCube() {
    glBegin(GL_QUADS);

    glColor3f(1,1,1); // face avant
    glVertex3f(-0.5f,-0.5f,0.5f);
    glVertex3f(0.5f,-0.5f,0.5f);
    glVertex3f(0.5f,0.5f,0.5f);
    glVertex3f(-0.5f,0.5f,0.5f);

    glColor3f(0,1,0); // face arrière
    glVertex3f(-0.5f,-0.5f,-0.5f);
    glVertex3f(0.5f,-0.5f,-0.5f);
    glVertex3f(0.5f,0.5f,-0.5f);
    glVertex3f(-0.5f,0.5f,-0.5f);

    glColor3f(0,0,1); // gauche
    glVertex3f(-0.5f,-0.5f,-0.5f);
    glVertex3f(-0.5f,-0.5f,0.5f);
    glVertex3f(-0.5f,0.5f,0.5f);
    glVertex3f(-0.5f,0.5f,-0.5f);

    glColor3f(1,1,0); // droite
    glVertex3f(0.5f,-0.5f,-0.5f);
    glVertex3f(0.5f,-0.5f,0.5f);
    glVertex3f(0.5f,0.5f,0.5f);
    glVertex3f(0.5f,0.5f,-0.5f);

    glColor3f(0,1,1); // haut
    glVertex3f(-0.5f,0.5f,-0.5f);
    glVertex3f(-0.5f,0.5f,0.5f);
    glVertex3f(0.5f,0.5f,0.5f);
    glVertex3f(0.5f,0.5f,-0.5f);

    glColor3f(1,0,1); // bas
    glVertex3f(-0.5f,-0.5f,-0.5f);
    glVertex3f(-0.5f,-0.5f,0.5f);
    glVertex3f(0.5f,-0.5f,0.5f);
    glVertex3f(0.5f,-0.5f,-0.5f);

    glEnd();
}

// Dessiner les limites (sol + murs)
void drawBounds() {
    int i;
    glColor3f(1,1,1);
    glBegin(GL_LINES);
    for(i = -20; i <= 20; i++) {
        glVertex3f(i*0.2f, -limitY, 0);
        glVertex3f(i*0.2f, limitY, 0);

        glVertex3f(-limitX, i*0.2f, 0);
        glVertex3f(limitX, i*0.2f, 0);
    }

    // Murs verticaux
    glVertex3f(-limitX,-limitY,0);
    glVertex3f(-limitX,-limitY,-limitX);

    glVertex3f(limitX,-limitY,0);
    glVertex3f(limitX,-limitY,-limitX);

    glVertex3f(limitX,limitY,0);
    glVertex3f(limitX,limitY,-limitX);

    glVertex3f(-limitX,limitY,0);
    glVertex3f(-limitX,limitY,-limitX);

    glEnd();
}

// Perspective 3D
void setPerspective(float fov, float aspect, float near, float far) {
    float f = 1.0f / tanf(fov * 0.5f * 3.14159f / 180.0f);
    float proj[16] = {
        f/aspect, 0, 0, 0,
        0, f, 0, 0,
        0, 0, (far+near)/(near-far), -1,
        0, 0, (2*far*near)/(near-far), 0
    };
    glMatrixMode(GL_PROJECTION);
    glLoadMatrixf(proj);
    glMatrixMode(GL_MODELVIEW);
}

int main() {
    SDL_Init(SDL_INIT_VIDEO | SDL_INIT_GAMECONTROLLER);

    SDL_Window* window = SDL_CreateWindow("Cube 3D - Modes",
                                          SDL_WINDOWPOS_CENTERED,
                                          SDL_WINDOWPOS_CENTERED,
                                          WIN_WIDTH, WIN_HEIGHT,
                                          SDL_WINDOW_OPENGL);

    SDL_GLContext context = SDL_GL_CreateContext(window);

    if(!gladLoadGLLoader((GLADloadproc)SDL_GL_GetProcAddress)) {
        printf("Erreur initialisation GLAD\n");
        return -1;
    }

    glEnable(GL_DEPTH_TEST);

    SDL_GameController* controller = NULL;
    if(SDL_NumJoysticks() > 0) controller = SDL_GameControllerOpen(0);

    setPerspective(45.0f, (float)WIN_WIDTH/WIN_HEIGHT, 0.1f, 100.0f);

    int running = 1;
    SDL_Event event;

    while(running) {
        while(SDL_PollEvent(&event)) {
            if(event.type == SDL_QUIT) running = 0;

            if(event.type == SDL_KEYDOWN) {
                switch(event.key.keysym.sym) {
                    case SDLK_m: moveEnabled = 1; rotateEnabled = 0; break; // déplacement seul
                    case SDLK_r: moveEnabled = 1; rotateEnabled = 1; break; // déplacement + rotation
                    case SDLK_p: moveEnabled = 0; break; // pause déplacement
                    case SDLK_o: rotateEnabled = 0; break; // pause rotation
                    case SDLK_s: moveEnabled = 1; rotateEnabled = 1; break; // reset tout
                }
            }
        }

        // Déplacement
        if(moveEnabled && controller) {
            Sint16 axisX = SDL_GameControllerGetAxis(controller, SDL_CONTROLLER_AXIS_LEFTX);
            Sint16 axisY = SDL_GameControllerGetAxis(controller, SDL_CONTROLLER_AXIS_LEFTY);

            cubeX += (axisX / 32768.0f) * speed;
            cubeY -= (axisY / 32768.0f) * speed;

            if(cubeX > limitX) cubeX = limitX;
            if(cubeX < -limitX) cubeX = -limitX;
            if(cubeY > limitY) cubeY = limitY;
            if(cubeY < -limitY) cubeY = -limitY;
        }

        // Rotation
        if(rotateEnabled) {
            rotX += 0.1f;
            rotY += 0.1f;
        }

        glClearColor(0.2f,0.2f,0.2f,1.0f);
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        glLoadIdentity();
        glTranslatef(0,0,cubeZ);

        drawBounds();

        glTranslatef(cubeX, cubeY, 0);
        glRotatef(rotX,1,0,0);
        glRotatef(rotY,0,1,0);

        drawCube();

        SDL_GL_SwapWindow(window);
    }

    if(controller) SDL_GameControllerClose(controller);
    SDL_GL_DeleteContext(context);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
