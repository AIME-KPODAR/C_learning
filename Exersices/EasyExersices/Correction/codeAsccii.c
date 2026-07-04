/*  CORRECTION DE L'EXERCICE 3
Affichage du code ASCII et hexa des carrtères 
    */
#include<stdio.h>
void codeAscii (){
    // Déclaration d'un caractère compteur
    char compteur ;
    // Boucle sur tous les caractères de l'alphabet 
    for (compteur = 'A'; compteur <='Z'; compteur ++)
    // Affichage du code ASCIIbet du code hexadécimal du caractère
    printf("caractere = %c  code = %d   code hexa = %x\n", compteur, compteur, compteur);

    // Boucle pour les caractères numériques de 1 à 9 
    for(compteur = '1' ; compteur <= '9'; compteur++) 
    // Affichage du code ASCII et du code hexadécimal du caractère
    printf("caractere = %c  code = %d   code hexa = %x\n", compteur, compteur, compteur);
}
int main () {
codeAscii() ;
    return 0 ;
}