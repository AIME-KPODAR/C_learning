/*La boucle for est utilisée si on connait le nombre de tour que notre 
boucle va parcourir
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Syntaxe de la boucle for
for (expresion 1; expression 2; expression 3) {
    block de code    
}
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
NB: expression 1 -> ele est exécutée en premier avant le block de code
    expression 2 -> elle definie la condition du block de code
    expression 3 -> increment le constructeur: elle est exécutée à
        chaque tour de la boucle*/

#include<stdio.h>

int main(){
    int i;
    for(i = 0; i <= 4; i ++){printf("Voici le contenu de la boucle: le %d\n", i);}
    return 0;
}