/* Enumération  est un groupe constitué uniquement de constante 
Syntaxe de enum :
enum nameOfEnum {
    CONSTANTE1,
    CONSTANTE2,
    CONSTANTE3
    ...
}
NB:
    les éléments de enum ont des indices qui sont leur identifiant
    si on donne une valeur au premier élément de enum les élements
    suivant prennent une valeur qui s'incremente de 1
    On peut aussi utiliser enum pour faire un switch 

*/

#include<stdio.h>

enum daysOfWeek {
    DAY1 = 1,
    DAY2 ,
    DAY3 ,
    DAY4 ,
    DAY5 ,
    DAY6 ,
    DAY7     
};

int main(){
enum daysOfWeek compteur = 9;
    switch (compteur)
    {
    case 1:
        printf("Lundi\n");
    break ;        
    case 2:
        printf("Mardi\n");
        break ;
    case 3:
        printf("Mercredi\n");
        break ;
    case 4:
        printf("Jeudi\n");
        break ;
    case 5:
        printf("Vendredi\n");
        break ;
    case 6:
        printf("Samedi\n");
        break;
    case 7:
        printf("Dimanche\n");
        break;
    default:
        printf("Aucun\n");
        break;
    }
    return 0 ;
}