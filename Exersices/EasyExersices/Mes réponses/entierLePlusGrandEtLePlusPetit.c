/*Ecrivons un programme qui affiche le plus grand et le plus petit entier
 d'une suite d'entiers saisis par l'utilisateur
 NB: Les nombres saisis ne sont pas conservés en mémoire 
      La suite se termine par 0*/


#include<stdio.h>
#include<stdbool.h>
#include<limits.h>
void comparateur (){

 int input , resultat=INT_MIN,resultatInferieur=INT_MAX ;
 while (true)
 {
   int var ;
   printf(" var : %d", var) ;
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");
 printf("Veuillez entrez un entier : ") ;
 scanf("%d", &input);

   if (input == 0){
      break;
   }

 if (input > resultat){
    resultat = input ;
       }

if (input < resultatInferieur){
        resultatInferieur = input ; }


 }
 
printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");
 printf("Le plus grand entier est: %d \n", resultat );
 printf("Le plus petit entier est: %d ", resultatInferieur );
printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");
}

int main () {

comparateur() ;
    return 0 ;
}