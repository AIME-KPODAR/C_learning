/* La taille du tableau du tableau set différente de la longueur de celle-ci
la taille est le nombre total de bytes des éléments du tableau alors que 
la longueur du tableau est le nombre d'élément du tableau*/

#include<stdio.h>

int numeroDesTickets [] = {1, 2, 3, 4, 5, 6} , tic;
int length = sizeof(numeroDesTickets)/sizeof(numeroDesTickets[0]);
int main(){
    printf("La taille en bite du tableau est: %zu\n", sizeof(numeroDesTickets));
    printf("La longueur du tableu est: %i\n", length);
    for (tic= 0 ; tic <= length; tic++){
        printf("Je suis un element du tableau: %i\n", numeroDesTickets[tic]);
    }
    return 0;
}