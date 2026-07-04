/*Pour une meilleur gestion d'un programme il est reconmandé de separer la
déclaration, l'appel et la définition d'une fonction
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Syntaxe : déclaration, appel et définition d'une fonction~
    functionType functionName(); -> déclaration
    functionName(); -> appel
    functionName(){
        code à exécuter -> déclaration
    }
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
NB:
    On peut créer autant de fonction que l'on a besoin
*/

#include<stdio.h>

// Déclaration 
void fonction1 ();
void fonction2 ();

int main(){
    // Appel
    fonction2();
    
    return 0;
}



// Définition
void fonction1(){
    printf("Fonction 1 \n");  
}
void fonction2(){
    printf("Fonction 2 \n");
    fonction1(); // appel 
}
