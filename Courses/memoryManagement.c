/*La gestion de l'utilisation de la mémoire permet au programme une performance 
en terme de rapidité  
Il a au total deux types de mémoire : la mémore statique et la mémoire dynamique
La mémoire statique est la mémoire reservée pour les variables avant l'exécution
du programme donc le programme alloue automaticement ce type de mémoire avnt de 
s'exécuter : c'est temporaire 
La mémoire dynamique quant à lui elle est alouée apès l'exécution du programme  
Les variables à l'intérieur d'une fonction sont stockées dans la mémoire pile, 
au moment de l'appel de la fonction elle se créee ; une fois l'exécution de la 
fonction cette mémoire est libérée ainsi un appel en boucle d'une même fonction 
occupe plus de mémoire pile et peut même entrainer un dépassement
de mémoire pile :stack overflow en anglais
NB: 
    maloc () et calloc () sont les deux fonctions d'allocation de mémoire
    La fonction calloc () initialise automatiquement la mémore allouée à zéro 
    On peut aussi réallouer une mémoire : realloc (ptr, size) -> NULL pour la
    gestion des erreurs
*/

#include<stdio.h>
#include<stdlib.h>

int main (){
    // Allous une mémoire
    int *ptr ;
    ptr = calloc(4, sizeof(*ptr));

    // Ecrivons dans cette mémoire
    *ptr = 2 ;
    ptr [1] = 4 ;
    ptr [2] = 6 ;



    // Lire dans la mémoire 
    printf("La memoire du pointeur est: %d\n", *ptr) ;
    printf("La memoire des autres pointeurs sont: %d %d %d", ptr[1],ptr[2],ptr[3]) ;    

    // Liberons la mémoire allouée
    free(ptr);
    ptr = NULL;

    return 0;
}