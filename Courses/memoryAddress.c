/*L'adresse mémore est l'espace de stocage d'une variable sur la machine(l'
ordinateur) pour accéder à elle on utilise l'opérateur de reference cette 
manière de l'appallée est le pointeur  stocke ou enregistre l'adresse mémoire
d'une variable comme sa valeur 
NB: 
    L'adresse m'émoire est en hexadécimal 
    Le pointeur différencie le langage C des autres langages et 
        permet de manipuler les données dans la mémoire de
        l'ordinateur et améliore la perfomance du programme
*/

#include<stdio.h>

int nombreReel = 22;
int main(){
    printf("Ceci est une adresse memoire: %p\n", &nombreReel);
return 0;
}