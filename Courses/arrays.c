/* Le tableau est utilisé pour stocker ou enregistrer les variables
en un seul endroit au lieu de les déclarer une après l'autre
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Syntaxe des tablaux:
int tablename[] = {var1 , var2, ...};
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
NB: On peut utiliser la boucle for pour parcourir le tableau connaissant la 
    taille du tableau
    Pour changer les éléments du tableau on utilise l'indixe de l'élément, idem 
    pour faire appel d'un élément  
########### REMARQUE ##########
C'est impossible d'afficher le tableau directement */

#include<stdio.h>

int main(){
    int ageDesEtudiants[] = {18, 21, 35, 42};
    printf("Voici l'age de Aime dans la liste d'age des etudiants: %d\n" , ageDesEtudiants[1]);
    return 0;
}