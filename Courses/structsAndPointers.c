/*L'utilisation des pointeurs dans la structure des types de données est très 
capital car non seulement cette façons de simplifie la gestion du code mais 
elle permet aussi d'éviter de copier toute une structure tout en consomant moins
de mémoire entrainant la rapidité du programme; on peut changer la valeur des
variables de la structure dépuis la fonction pointée ; cette pratique rend 
dynamique la structure on peut alloué la mémoire */

#include<stdio.h> 
#include<string.h>

struct maStructure {
    int reel;
    char nom [50];
    char lettre;

};
void secteur(struct maStructure *b){
    strcpy(b->nom ,"PortDeLome");
}
int main(){

    struct maStructure badge = {10 , "TogoTerminal", 'B'};
    printf("%d %s %c\n", badge.reel, badge.nom , badge.lettre);
    secteur (&badge);
    printf("%d %s %c\n", badge.reel, badge.nom , badge.lettre);
    return 0;
}