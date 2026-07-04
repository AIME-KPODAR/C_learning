/*Ecrivons un programme qui affiche le produit de deux entiers saisi au clavier
puis modifions le pour en afficher deux réels en suite*/

#include<stdio.h>

// Multiplication des entiers
int multiplicateurEntiers (){
   int entier1 ,entier2 ;
    printf("||| Veillez saisir deux nombres entiers ||| \n");
    printf("    Saisissez le premier nombre entier: ");
    scanf("%d", &entier1);
    printf("    Saisissez le second nombre entier: ");
    scanf("%d", &entier2);
    int resultats = entier1 * entier2 ;
    printf("||| La multiplication des deux nombres entiers est: %d |||", resultats);
    return resultats;
}

// Multiplication des réels
float multiplicateurReels (){
   float reel1 ,reel2 ;
    printf("||| Veillez saisir deux nombres  reels ||| \n");
    printf("    Saisissez le premier nombre reel: ");
    scanf("%f", &reel1);
    printf("    Saisissez le second nombre reel: ");
    scanf("%f", &reel2);
    float resultats = reel1 * reel2 ;
    printf("||| La multiplication des deux nombres  reels est: %f |||", resultats);
    return resultats;
}

int main (){

multiplicateurReels();
// multiplicateurEntiers();
    return 0;
}



/* REMARQUES
        Ce programme je gère pas la gestion des erreurs
        Il ne peut que calculer que le produit un chiffre réduit
            par exemmple 122333344444 x 1111111475533 (idem en réel)
            donne un résultat négative
*/