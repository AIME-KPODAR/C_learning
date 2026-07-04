/* EXERCICE 13
Ecrivons un programme qui convertie une matrice en un simple tableau 
*/

#include<stdio.h>
int matrice [5][5] = {{1, 2, 3, 4, 5},{100, 25, 30, 4, 502},{17, 20, 31, 40, 52},
{11, 22, 33, 44, 55},{10, 20, 30, 40, 50}} ;
int i, l ,k = 0 , n;
int tableauSimple [25] = {};

void affiche_matrice (int matrice [5][5]){
    // Boucle pour parcourir la matrice
for (i = 0; i < 5; i++){
    for ( l = 0; l < 5; l++){
        printf("Element de la matrice: %d\n", matrice[i][l]) ;

    // Conversion de matrice en simple tableau
    tableauSimple[k] = matrice [i][l] ;
    k++ ;
    }
}

    // Boucle pour parcourir le tableau 
    for (n = 0; n < 25; n++){
        printf("Element de tableau simple: %d\n", tableauSimple[n]) ;
    }
}

int main () {
affiche_matrice (matrice) ;
    return 0 ;
}
