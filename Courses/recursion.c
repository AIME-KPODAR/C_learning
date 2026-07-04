/* La récursivité est la manière d'appeler une fonction elle même
deux fois, elle permet de décomposer les problèmes les plus complèxe 
et petit problème plus simple à résoudre*/

#include<stdio.h>
#include<stdint.h>
// Ici nous allons calculés la somme d'une plage de nombre : 10 >= n 
uint64_t factoriel (uint64_t a);
int somme (int n);
int main(){
    int resultat = somme (10);
    uint64_t rst1 = factoriel (10);
    uint64_t rst2 = factoriel (30);
    printf("La somme de nombres compris entre 10 et 0 est: %d", resultat);
    printf("Le resultat de factoriel 10 est: %llu\n", rst1);
    printf("Le resultat de factoriel 100 est: %llu\n", rst2);
    return 0;
}

int somme(int n) {
    if (n > 0){
        return n + somme (n - 1);
    }
    return 0;
}

uint64_t factoriel(uint64_t a) {
    if (a > 1){
        return a * factoriel (a - 1);
    }
    return 1;
}