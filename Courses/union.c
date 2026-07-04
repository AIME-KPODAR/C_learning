/*Union est comme la structure de types de données mais sa particularité est
qu'il a prend la taille plus grande d'une de ces éléments 
NB:
    chaque élément de union partage la même mémoire : celle la plus grande
    Union = struct en terme de reference 
*/


#include<stdio.h>
#include<string.h>

union unicef {
    int identifiant ;
    char association [20];

};

int main(){
    union unicef Togo ;
    union unicef partiePolitique ;
    Togo.identifiant = 228 ;
    strcpy(partiePolitique.association , "PTP");
    printf("Le code postal du Togo est: %i\n", Togo.identifiant) ;
    printf("Partie politique ancienne: %s\n", partiePolitique.association) ;
    printf("Je suis la taille en byte de union: %zu\n", sizeof(Togo)) ;    
    return 0;
}