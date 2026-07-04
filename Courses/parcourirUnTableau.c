/*  EXERCICE 12
Ecrivons un programme dans lequel nous déclarerons et initialiserons un tableau
d'entiers t avec des valeurs, dont certaines seront nulles. Le programme va 
parcourir le tableau et imprimer les indix des éléments nuls du tableau
(sans utiliser aucune variable de type entier)
*/

#include<stdio.h>

int main (){
int tableauDesEntiers [10] = {1, 21, 0, 45, 8, 0, 6, 0, 31, 0} ;
for (int i = 0 ; i < 10 ; i++){
    if (tableauDesEntiers[i] == 0){
        printf("Voici un indice d'element 0 du tableau:  indice -> %d\n", i) ;
    }
printf("Voici un element du tableau: %d\n", tableauDesEntiers[i]) ;
}

    return 0 ;
}