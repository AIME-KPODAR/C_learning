/*  EXERCICE 11
Ecrivons un programme dans lequel :
1. Déclarez un entier i et un pointeur vers un entier p 
2. Initialisez l'entier à une valeur arbitraire et ferez pointer 
    le pointeur sur i
3. Imprimer la valeur de i 
4. Modifier l'entier pointer par p (en utilisant p et non pas i)
5. Et imprimez la valeur de i une dernière fois
*/

#include<stdio.h>

int main () {
    // 1. Déclarons un entier i et un pointeur vers un entier p 
int i , p ;
int *ptr = &p ;

    /* 2. Initialisons l'entier à une valeur arbitraire et ferez pointer 
    le pointeur sur i */
    i = 11470 ;
    ptr = &i ;

    // 3. Imprimons la valeur de i 
    printf("La valeur de i est: %p\n", i) ;

    // 4. Modifions l'entier pointer par p (en utilisant p et non pas i)
    ptr = &p ; 

    // 5. Imprimons la valeur de i une dernière fois
    printf("La derniere valeur de i est: %p\n", i) ; 
    return 0 ;
}