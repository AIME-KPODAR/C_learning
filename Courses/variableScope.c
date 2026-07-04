/*La portée des variables est aussi l'une des notions  à na pas nier car ce 
denier influence sur l'exécution du code si elle est mal prise en charge et 
peut même modifier les résultats prévus pour un programme. Généralement nous 
avons deux type de portée: locale et globale.
NB:
    Si le nom d'une variable est le même à l'intérieur et à l'extérieur d'une 
    fonction en langage C l'ordinateur considère la variable étant à l'intérieur
    de la fonction comme la variable locale et l'autre comme la variable globale
    par contre si il y a plusieurs variables de même nom à l'intérieur d'une 
    fonction le programme affiche une erreur lors de son exécution (idem pour 
    la variable globale)
*/

#include<stdio.h>
 int globalVariable = 12 ;

void localVariable (){
    printf("Moi je modifie la variable globale en locale: %d\n", globalVariable++);

}

int main(){
    localVariable();
 printf("Eh bien c'est le resultat: %d\n", globalVariable);
return 0 ;
}