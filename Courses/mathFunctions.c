/*Les fonctions mathématiques permettent de mieux résoudre les problèmes 
mathématiques; on peut donc calculer la racine carrée d'un nombre, l'arrondir
...*/

#include<stdio.h>
#include<math.h>

int main(){
    printf("La racine carre de 16 est: %.0f\n", sqrt(16));
    printf("2 puissance 5 est: %.0f\n", pow(2,5));
    printf("L'arrondi par ecces de 2.8979 de deux chiffres est: %.2f\n", ceil(2.8979));
    printf("L'arrondi par defaut de 2.0019 de deux chiffres est: %.2f\n",floor(2.0019));

    return 0;
}
