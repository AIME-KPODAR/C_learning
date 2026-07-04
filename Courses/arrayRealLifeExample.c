// Ecrivons un scripte pour calculer la moyenne d'un élève

#include<stdio.h>
int notes [] = {13, 15, 12, 14, 10, 14, 17, 20} , i, somme;
int length = sizeof(notes)/sizeof(notes[0]);
float moyenne;
int main () {
    for(i = 0; i <= length ; i++){
    somme = notes[i]+somme;
    moyenne = somme / length ;
    }
    printf("La somme des notes est: %d\n", somme);
    printf("La moyenne est: %.2f\n", moyenne);
return 0;
}