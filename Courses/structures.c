/*La structure des types de données est une manière de structurer plusieurs types de
données en un seul endroit 
On peut modifier les valeurs des variables de la structure
On peut egalement copy les valeurs d'une structure à une autre
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Syntaxe de la Structure des types de données:
    struct nameOfstruct {
    dataType1 dataName ;
    dataType2 dataName ;
    ...
    };
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

#include<stdio.h>
#include<string.h>

struct maStructure {
    int reel ;
    char nom [250000000] ; // string
    char lettre ;
    
};

void init(struct maStructure f)
{

    
    // assigner des valeurs à la variable de la stucture 
     f.reel = 13;  
     f.lettre = 'T';
     strcpy(f.nom ,"koffi");
     
}

void init2(struct maStructure * f)
{

    
    // assigner des valeurs à la variable de la stucture 
     f->reel = 13;  
     f->lettre = 'T';  // passage par pointeur != passage par valeur
     strcpy(f->nom ,"koffi");
     
}

typedef struct maStructure maStructure_t; // redefinir le nom de la structure

        // création d'une variable pour la stucture 
     struct maStructure x = {0} ; 
int main(){
     init(x);
    // creer et assigner des valeurs à la variable de la stucture 
   //struct maStructure y = {13, "Andre", 'L'};

    // affichage des donnés de la stucture 
    printf("Le reel exixtant dans ma stucture est: %d\n", x.reel);
    printf("La lettre existant dans ma structure est: %c\n", x.lettre);
    printf("Le nom existant dans ma structure est: %s\n", x.nom);
    //printf("Tous les elements existant dans ma structure est: %d %s %c\n", y.reel, y.nom, y.lettre);
    return 0;
}



/* NB: pour assigner une valeur du type chaine de caractère on utilise
la fonction strcpy() pour éviter l'erreur 
On peut aussi assigner des valeurs directement à notre structure via les 
accolades dans ce cas on suit l'ordre de la déclaration de type de données
de notre structure */