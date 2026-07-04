/*break et continue sont deux notions clé dans certaine boucle
break : pour sortie de laboucle et continue: pour continuer l'exécution
de la boucle*/

#include<stdio.h>
int reel ;
int main(){
    printf("__Debut de la boucle__\n");
    for (reel = 5; reel < 10; reel++ )
    {printf("Je suis le %d de la boucle For\n" , reel);
        if (reel == 8) {printf("Ehh bien je suis un 8 de la boucle venant du break\n");break;}
        }
    printf("__Fin de la boucle__");
    return 0;
}