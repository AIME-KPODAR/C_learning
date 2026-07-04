/* Pour la getion de l'entée utilisateur sur les strings on peut attribuer une 
longueur très grande à notre tableau pour ne plus utilisé l'operateur de 
reference "&" dans scanf() ou soit on laisse notre tableau vide et on utilise
& dans la fonction scanf()
LA fonction scanf() a des limites, elle considère les espacement les tabulations 
comme des caractères de terminaux par conséquent elle affiche juste le premier
mot pour remedier cela on utilise la fonction fgets() suivi de son 
argument (comme dans l'exemple ci-contre) pour lire toute la ligne
*/

#include<stdio.h>
#include<string.h>

char nomComplet [40];
int main(){
    printf("Entez votre nom complet: \n");
    fgets(nomComplet, sizeof(nomComplet), stdin);
    printf("Votre nom complet est: %s\n", nomComplet);

return 0;
}

/*
char nomComplet [40];
int main(){
    printf("Entez votre nom complet: \n");
    scanf("C'est un scanf : %s", &nomComplet);
    printf("C'est le resultat de scan: %s\n", nomComplet);
return 0;
}

*/
