/*Ecrivons un programme qui échange deux nombres entiers et affiche les 
entiers avant et après l'échange */

#include<stdio.h>

// Saisir deux nombres entiers
int nombresEntiers (){
    int entier1,  entier2 ;
    printf("\n");
    printf("Veillez saisir deux nombres entiers \n");
    printf("Saississez le premier entier: ");
    scanf(" %d", &entier1);
    printf("Saississez le second entier: ");
    scanf(" %d", &entier2);
    printf("\n");
    printf("Les deux entiers saisi non echanger sont: %d et %d\n", entier1 , entier2);
    printf("\n");
    printf("Les entiers echanger sont: %d et %d\n", entier2, entier1) ;
    printf("\n");
    return 0;
}


int main() {

nombresEntiers () ;
    return 0;
}