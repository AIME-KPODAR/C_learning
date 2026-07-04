/*La boucle imbriquée contient au minimum deux boucle : une boucle extérieur 
et l'autre intérieur : la boucle intérieur est dans la boucle extérieur
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Syntaxe d'une boucle imbriquée:
    for (expression 1; expression 2; expression 3){
        for(expression 1; expression 2; expression 3) {
                }
    }
*/

#include<stdio.h>
    int x = 2, y = 4 ;
    int main(){
        for (x = 0 ; x <= 6; x ++){
        printf("Voici le multiplicateur: %d\n", x);
            for (y = 1 ; y <= 4; y++) {
                printf("Le resultat de cette multiplication est: %d\n", x*y);}
        }
        return 0;
    }