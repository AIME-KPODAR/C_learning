#include<stdio.h>

int main(){
    // Create variable to calculate the area of rectangle 
    int length = 10;
    int width = 20;
    int area; 

    // formule of area 
    area = length * width;
    // Printed value
    printf("Longeur est:%d\n", length);
    printf("Largeur est:%d\n", width);
    printf("Aire est:%d\n",area);
    printf("La taille en memoire en bite qu'occupe l'aire est:%zu",sizeof(area)); // pour montrer le type de la variable


}
/* le terminal n'arrive pas afficher les accentuantion 
comme é par exemple*/

/* Ainsi les entiers réels ont 2 ou 4 bite
les entiers flottants ont 4 bites
les doubles ont 8 bites
les simple caractère ont 1 bite */