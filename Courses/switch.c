/*switch est utilisé pour exécuter un block de code dont sa condition
est vaie  parmis les autres blocks de codes 
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Syntaxe de switch :
switch (expression){
    case alpha:
        block de code
        break;
    case gama:
        block de code
        break;
    case infini 
        block de code
        break;
    default:
        block de code
} 
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Nb: On peut en avoir une infinité de case , chaque case est suivi de break qui 
 stop l'exécution du block code du case et default quant à lui  son block de 
 code est exécuté si aucune condition de case est vraie */


#include<stdio.h>

int main() {
    int dosa = 7 ;
    switch ( dosa) {
        case 1 :
            printf("Le gardien porte un dosa 1");
            break;
        case 2:
            printf("Ce joueur est au banc");
            break;
        default :
            printf("Il n'y en pas de match aujourd'hui");
    }
    return 0;
}