/* Else if est utilisé si la condition de if est fausse permettant la création
d'une nouvelle condition semblable à celle de if 
NB: après else if il y else tout cours
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Syntaxe de else if:
if (conditon une){ block de code à exécuter}
    else if (codition deux) { block de code à exécuter}
else { block de code à exécuter }
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/


#include<stdio.h>

    int prixUnitaireDuJus = 100 ;
    int prixUnitaireDeau = 25 ;
    int prixUnitaireCreme = 200 ;
    int main() {
        if (prixUnitaireDuJus == 125) {
            printf("Vous pouvez payez une unite du jus et une unite de l'eau");
        }
        else if (prixUnitaireDuJus == 325) {
            printf("vous pouvez payer un jus, une eau et un creme");
        }
        else {printf("Monnaie insuffisante");}
        return 0;
    }
