/*Ecrivons l'algorithme permettant la multiplication de deux entiers
positifs a et b selons le principe recursif suivant:
a * b = a * (b - 1) + a si b est impair 
a * b = (2 * a) * (b/2) si b est pair et different de 0 */

#include<stdio.h>
void produit (){
    int a, b, resultat , reste;
    printf("Veuillez saisir deux entiers positifs\n") ;
    printf("Saisissez le premier entier positif: ");
    scanf("%d", &a) ;
    printf("Saisissez le second entier positif: ") ;
    scanf("%d", &b) ;
    while (a < 0)
    {
    printf("Saisissez le premier entier positif: ");
    scanf("%d", &a) ;
    }
    while (b <= 0)
    {
    printf("Saisissez le second entier positif: ") ;
    scanf("%d", &b) ;
    }
    reste = b % 2 ;
    if ( reste = 0)
    {
    resultat = (2 * a) * (b/2) ;
    } else {
    resultat = a * (b - 1) + a ;  
    }
   printf("Le produit de %d par %d est: %d", a, b, resultat) ;
}

int main(){

produit () ;
    return 0 ;
}