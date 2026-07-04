/* Les chaines de caractères sont aussi des tableau constitués des caractères
donc on peut utiliser une boucle pour les parcourir aussi
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Syntaxe de string:
    char tablename[]="bdfvjdhfbdjfdj";
        OU
    char tablename []={'z','j','c','o','t','d','f','\o'}; le \o indique la fin 
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/
#include<stdio.h>

int main(){
     
    char motDuJour[]="bonjour.";
    int length = sizeof(motDuJour)/sizeof(motDuJour[0]),i;
    printf("Koffi %s\n", motDuJour);
    for (i = 0; i < length; i++){
        printf("%c\n", motDuJour[i]);
    }

    return 0;
}