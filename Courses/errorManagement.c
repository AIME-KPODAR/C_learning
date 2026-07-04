/*La gestion des erreurs permettent la clareté et la maintenance d'un programme
car elle facilite la maintenance du programme.

REMARQUE: 
    On peut aussi utiliser une ou plusieurs conditions pour faire la 
    gestion des erreurs par exemple les fonctions qui retournent la valeurs NULL
    si elles n'ont echouées; on peut donc comparer les élements que ces fonctions
    retournent à NULL et afficher ensuite un message d'erreur
    Les fonctions comme malloc () , fopen() retournent NULL en cas d'echec; pareil
     pour les pointeurs

NB: Quelques fonctions pour la gestion des erreurs:
    perror () : fonctionne comme printf()
    strerror(errno) : est utilisée dans printf() comme variable: elle affiche
     aussi les erreurs ; c'est une fonction qui enregistre les erreurs passés
     d'un programme (C'est à dire les codes d'erreur des dernièers utilisation)
    
On peut aussi utiliser la fonction exit() pour quitter le programme.
*/

#include<stdio.h>
#include<errno.h>  // Gestion des erreurs
#include<string.h>
int  division () {
    int x , u , r;
    printf("Entrez x: ");
    scanf("%d", &x) ;
    printf("Entrez u: ");
    scanf("%d", &u) ;
    if ( u == 0){
        //printf("Error: %s", strerror(errno));
        printf("Error: dision par zero impossible" );
    }
    r = x / u ;
    printf("Div: %d", r );
    return 0 ;
}
int main () {

division () ;
    return 0 ;
}

