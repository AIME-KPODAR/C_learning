/* short hand if else est une forme simplifiée de if else condition 
son utilisation permet d'écrire une seule ligne au lieu de plusieurs
lignes
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Syntaxe de short hand il else:
variable = (condition) ? expression vraie : expression fausse ;
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/


#include<stdio.h>

int main() {
        int age = 19;
        (age < 18) ? printf("Vous etes mineur car votre age est: %d", age) : 
        printf("Vous etes majeur car votre age est: %i", age);
    return 0;
}
