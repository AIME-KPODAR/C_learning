/*Ecrivons un programme déterminant tous les diviseurs plus grand
que 1 d'un nombre entier saisi */

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>



void verificateur (){
    int input;
 
    while (input <= 1){
     printf("Saisissez un nombre entier superieur a 1: ");  
     scanf("%i", &input);
    }

    printf("Les diviseurs de %d sont: ", input);
    for (int i = 1 ; i < input ; i++){
    
        if ( (input % i) == 0 ){
        printf("%d ",i);

        }
    } 
    printf("\n ");
    
}





int main () {
verificateur ();
    return 0 ;
}