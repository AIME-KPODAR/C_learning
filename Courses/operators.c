/* Ils sont 5 au total
1) les opérateurs arithmetiques ( + ;- ;/ ;* ;-- ;++ ;% )
2) les opérateurs logique (&& ;|| ;!)
3) les opérateurs d'affectation (= ;+= ;-= ;*= ;|= ;^= ;%= ;<<= ;>>= ;&= ;/=)
4) les opérateurs de comparaison (== ;!= ;< ;> ;<= ;>=)
5) les operateurs au niveau de bit

    2) && et -> AND il returne 1 si la déclaration est vraie
        || ou -> OR il retourne 1 si l'une des déclarations est vraie
        ! il renverse le resultat et retourne 0 si le resultat est 1*/


#include<stdio.h>
    int main(){
        int n = 3;
        int o = 4;
        int sum = n + o ;
        printf("La somme de n et o est: %d" , sum);
    }