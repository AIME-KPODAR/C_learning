/*  EXERCICE 13
Déclarons et initialisons une matrice [5,5] d'entiers (iMat).Ecrivons 
une fonction affiche_matrice qui admette en paramètre une matrice [5,5]
et qui imprime ses élements sous forme de tableau.La procédure main fera
un appel à affiche_matrice pour la matrice iMat.
*/

#include<stdio.h>

int matriceDesEntiers [5][5]= {{1, 2, 3, 4, 5},{10, 20, 30, 40, 50},
{11, 21, 31, 41, 51},{11, 22, 33, 44, 55},{100, 200, 300, 400, 500}} ;

void affiche_matrice (matriceDesEntiers){
    for (int i = 0 ; i < 5 ; i++) {
        for (int j = 0 ; j < 5 ; j++){
            int k , tableauSimple [25];   
            taleauSimple [k] = matriceDesEntiers[i][j] ;
            k++ ;
            for( int u = 0 ; u < 25 ; u++){
                printf("Les elements du tableau simple: %d\n",tableauSimple[u]) ;
            }
        printf("Element de la matrice: %d", matriceDesEntiers[i][j]) ;
        }           
    }
}
int main () {                                                
affiche_matrice () ;                      
    return 0 ;
}