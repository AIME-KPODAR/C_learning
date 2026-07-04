/* La constante est une variable inchangeable
on utilise généralement le mot const pour sa 
déclaration 
     si une variale est déclarée étant constante 
     on lui assigne forcement une valeur dans l'immédiat
     (pour éviter l'erreur) pas après 
C'est mieux de les déclarées en lettre majiscule*/

#include<stdio.h>
    int main(){
        const int CREAMETEMPERATURE = 0;
        printf("La temperature de le glace est: %d" ,CREAMETEMPERATURE);
    }