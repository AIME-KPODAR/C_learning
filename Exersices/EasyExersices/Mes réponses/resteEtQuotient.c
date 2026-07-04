/*Ecrivons un algorithme qui simule l'opération de deux entiers
positifs a et b saisi au clavier sans utiliser le symbole / ; 
en divisant le plus grand par le plus petit et en affichant 
le quotient et le reste de la division */
#include<stdio.h>
void divisionEntiere (){
    int a , b, reste, quotient , lePlusGrand , lePlusPetit;
    printf("Veuillez saisir deux entiers positifs\n");
    printf("Saisisez le premier entier positif: ");
    scanf(" %d",&a);
    printf("Saisissez le second entier positif: ");
    scanf("%d", &b);
    while(a < 0 ){
        printf("Saisisez le premier entier positif: ");
        scanf(" %d",&a);
    }
    while (b < 0)
    {
        printf("Saisissez le second entier positif: ");
        scanf("%d", &b);
    }
    
    if (a < b){
        reste = b % a ;
        lePlusGrand = b ;
        lePlusPetit = a ;
        quotient = (b - reste)/ a ;
    }
        if (b < a){
        reste = a % b ;
        lePlusGrand = a ;
        lePlusPetit = b ;
        quotient = (a - reste)/ b ;
    }
    printf("Le reste de la division de %d par %d est: %d et le quotient est: %d", lePlusGrand, lePlusPetit,reste, quotient) ;
}

int main () {
divisionEntiere ();
    return 0 ;
}