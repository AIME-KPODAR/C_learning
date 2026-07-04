/*Créer un fichier est une notion simple et très utile par example si on 
installe une application elle créee ses propres fichiers où elle stocke 
ses données: ici on fait appelle à la notion de pointeur*/

#include<stdio.h>

int main(){
    FILE *fptr ;

    // création du fichier
    fptr = fopen("C:\\Users\\user\\Desktop\\FichierCreer.txt", "w"); // sur le bureau

    // Ecrivons un texte dans notre fichier
    // fprintf(fptr, "Je suis la première ligne")

    // Ajoutons à nouveau un texte
    //fptr = fopen("C:\\Users\\user\\Desktop\\FichierCreer.txt", "a");
    //fprintf(fptr, "La ligne ajoutée");

    // Enregistrer le contenue dans un tableau
    char tableau[200];

    // Lire et afficher le contenue du tableau
    fgets(tableau, 200, fptr);
    fprintf(fptr, "Je suis un contenue");


    // Fermeture du fichier
    fclose(fptr);

    return 0;
}


/*On peut lire un le contenu d'un fichier par la boucle while
dans notre exemple on écrit:
    while(fgets(tableau, 200, fptr)){
        printf("%s", tableau);
    }
        NB: ici nous somme en mode lecture
            ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
            Si on tente d'ouvrir un fichier néant la fonction fopen() renvoie
            une valeur nul ainsi pour l'eviter nous pouvons utiliser une 
            condition comme suit:
                if (fptr == NULL) {
                    printf("Le fichier n'existe pas")
                }
            ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
*/