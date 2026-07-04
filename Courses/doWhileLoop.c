/* La boucle Do/while  est une variante de la boucle while : ici le programme
exécute d'abord un block de code avant d'enter dans la boucle principale et 
tant que la condition de la boucle principale est vraie la boucle set repetée
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Syntaxe de la boucle do/while: 
do {
    block de code}
while (condition);
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Ici si la condition de la boucle principale est fausse alors le pragramme 
entre dans la partie de do*/


#include<stdio.h>
int main(){
    int taxe = 145 ;
    do {
        printf("Je suis une boucle\n");
        taxe ++ ;
    }
    while (taxe < 150);
    return 0;
}

