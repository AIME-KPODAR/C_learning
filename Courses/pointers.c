/* Les pointeurs sont des adresses mémoires utilisées comme la valeur
pour une variable
Leurs gestion permettent la manipulation des donées en mémoires de l'ordinateur
rédusant le code et améliore la performance du progamme: c'est ce qui différencie
le langage C des autres langages 
Géneralement il y deux manières de créer un pointeur soit par un opérateur de 
referencement(&) ou par un opérateur de déreferencement(*)
*/

#include<stdio.h>

int andreAge = 2 ;
int* pointeur = &andreAge ;
int *pointeurDereferencer = &andreAge ;
int main(){
    printf("Ehh bien c'est moi le pointeur: %p\n", pointeur);
    printf("Non moi je suis la valeur de andreAge: %i\n",andreAge);
    printf("Tient donc moi je suis l'espace memoire: %p\n", &andreAge);
    printf("Je cloture votre discussion car je suis un dereferencement: %d\n",*pointeurDereferencer);

return 0;
}
