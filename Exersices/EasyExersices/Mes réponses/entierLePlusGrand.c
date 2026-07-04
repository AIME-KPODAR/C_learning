/*Ecrivons un programme qui affiche le plus grand nombre des trois 
nombres saisi par l'utilisateur*/

#include<stdio.h>

void comparateur(){
    int entier1 , entier2 , entier3 , resultat;
    printf("Saisissez trois entiers\n") ;
    printf("Veillez entrez le premier entier:") ;
    scanf("%d", &entier1);
    printf("Veuillez entrez le second entier:");
    scanf("%d", &entier2) ;
    printf("Veuillez entrez le dernier entier:") ;
    scanf("%d" , &entier3) ;
    resultat = entier1 ;
    if (entier2 > resultat){
        resultat = entier2 ;
    }
    if (entier3 > resultat){
        resultat = entier3 ;
    }
    printf("Le plus grand entier est: %d", resultat);
}

int main(){
comparateur ();
    return 0 ;
}