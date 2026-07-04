/*Le tableau à multi-dimensions est est un tableau 2 d ou un tableau composé des
lignes et des colonnes : chaque éléments de la ligne ou de la colonne a un indixe 
pour l'identifier
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Syntaxe des tableaux multi-dimensions 
int tablename [rows][columns]={{var1,var2,var3,...},{var11, var12, var13, var14...}}
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Chaque élément du tableau multi-dimension ou matrixe est identifé par son indice
Pour parcourir une matrice d'un ligne et d'une colonne on utilise une boucle
imbriquée la première boucle pour la ligne du matrixe et la seconde pour la 
colonne
On peut créer autant de ligne dans une matrice à condition que la dernère soit 
celui de la colonne autrement dit la dernière accolade est pour la colonne et 
est unique  
*/


#include<stdio.h>

/*
// Ceci est une matrice de 2 lignes:
int matrix [2][3] = {{1, 2, 6},{7, 5, 8}}, i, j;

 int main(){

   for (i = 0; i<2 ;i++){
      for(j =0 ; j<3 ;j++){
         printf("Cette matrice contient: %i\n", matrix[i][j]);
         }
   }
    return 0;
 }
*/

// Ceci est une matrice de 4 lignes:
int main(){
   int matrix [2][4][3]={{{1, 2, 3},{4, 5, 6},{7, 8, 9},{10, 11,12}},
   {{13, 20, 30},{40, 50, 60},{70, 80, 90},{100, 110,120}}} ,i, j ,l;
   for(i=0; i<2; i++){
      for(j=0; j<4; j++){
         for (l=0; l<3; l++){
            printf("Ehh bien je suie un element du matrice: %d\n", matrix[i][j][l]);
         }
         printf("\n");
      }
      printf("\n");
   }
return 0;
}

// Qestion: pourquoi pour une telle matrice à l'ecrit on met 8 lignes au lieu de 4