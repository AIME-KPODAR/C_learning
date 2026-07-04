/*Ecrivons un programme qui détermine si un entier est pair ou impair 
NB: l'entier est saisi par l'utilsateur*/

#include<stdio.h>
void verificateur(){
    int nombre;
    float reste ;
    printf("Saisissez un nombre entier: ");
    scanf("%i", &nombre);
    reste = nombre % 2 ;
    if (reste = reste ){
        printf("%i est impaire", nombre);
    } else{printf("%d est pair", nombre);};
}


int main(){
    verificateur();
    return 0 ;
}