/*If est utilisé pour exécuter une action si une condition est vrai
 Else quant à lui si la même condition est fausse
 Elif ou else if pour exécuter une nouvelle action tant que la première 
  condition est fausse  
 switch pour exécuter plusieurs conditions alternatives 
 Ici on utilise est opérateurs de comparaisons
 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 
 Syntaxe de If : if (condition){ block de code d'exécution} 
 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/


#include<stdio.h>

    int masseDuBlé = 10 ;
    int masseDuRiz = 20 ;    
    int main(){ 
        if (masseDuBlé < masseDuRiz) { 
            printf("Le riz est plus cher plus que le Ble");
            return 0;
        } 
    }