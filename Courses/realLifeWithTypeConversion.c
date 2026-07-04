/* NOus allons écrire un pseudo code permettant 
de calculer le poucentage du score d'un 
utilisateur 
Donc il  nous faut le score maximume et le score actuel
     de l'utilisateur*/

#include<stdio.h>
int main(){
    int maxScore = 512;
    int actuelScore = 180;
    float pourcentage = (float) actuelScore/maxScore * 100.0;
    printf("Le porcentage de l'utilisateur est: %.2f", pourcentage);
    return 0;
}