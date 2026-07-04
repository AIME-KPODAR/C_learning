/*la boucle while est utilisée tant qu'une condition est vraie 
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Syntaxe de la boucle while:
while (condition) {
    block de code }
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
NB: Ñ'oubliez pas d'incrémenter la variable sinon vous aurez 
une boucle infini ou si vous oubliez de mettre les accolades après while
Ou carrement si vous dessidez d'opter une boucle infini il vous faut 
while true
*/

#include<stdio.h>

int main() {
    int codePin = 0;
    while ( codePin < 8){
        printf("Vous etes en dessous du code PIN, code PIN actuel est : %d\n", codePin);
        codePin++ ;
    } 
    return 0;
}
 