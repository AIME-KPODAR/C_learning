#include<stdio.h>
int main(){
    int x = 7;
    int y = 2;
    int div1 = 7/2;
    float div2 = (float) 7/2;
    printf("La division sans la conversion est: %d\n", div1);
    printf("La division avec la conversion est: %f\n", div2);
    printf("La division avec la conversion ayant le resutat pertinant est: %.1f" , div2);
    return 0;

}

/* Il y a deux type de conversion en C : 1)conversion automatique et 
2)la conversion manuelle 
1) Si au hard tu déclare une variable avec son type qui ne lui 
correspond pas le compilateur convertie cette variable au même
type comme tu l'a déclarée
2)Pour s'assurer que le résutat entandu soit certitude la conversion 
se fait manuellement (cas de notre exemple de haut le résultat est 
3.5 -> 3,5  et non 3) */