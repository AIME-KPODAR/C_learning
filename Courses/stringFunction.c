/* Utiliser une fonction des chaines de caractères nous permet de manipuler 
aisement les chaines de caractères par exemple les comparer, combiner ...
*/

#include<stdio.h>
#include<string.h>

char nom [] = "kpodar";
char prenom [] = "andre@.com";
char* mail; // ici j'ai utilisé le pointeur
int main () {
    mail = strcat(nom, prenom);
    printf("Son mail est: %s", mail);
return 0 ;
}