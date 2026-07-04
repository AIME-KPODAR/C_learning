/*La fonction permet d'exécuter autant de fois une action, elle est précedée de 
void si elle ne retourne rien et néant si elle va retounée une valeur 
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Syntaxe des fonctions:
    void functionName (){
        code à exécuter
    } 
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 
NB:
    On peut appeller une fonction à l'intérieur d'une autre          
*/

#include<stdio.h>

void multiplication (){
    int h = 4 , j = 8 , multiplication = h * j;
    printf("4 x 8 = %d\n", multiplication);
}
int main() {
    multiplication();
    return 0;
}





