/*Else est utilisé si la condition de if est fausse 
NB: quand il y If c'est forcement qu'il y en aura else 
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Syntaxe de else:
if (codition) { code à exécuter} else { code à exécuter} 
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/


#include<stdio.h>


int laPause = 12;
int main(){
    if (laPause > 12) { 
        printf("Boujour la team ");} 
        else {
            printf("C'est le soir");
        }
    return 0;
}