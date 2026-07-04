/* Les paramètres sont très importants car ils font que la fonction est dynamyque
Ont peut passer plusieurs paramètres à une fonction et au moment de l'appel de la 
fonction on lui passe les arguments selons l'ordre des paramètres 
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Syntaxe des paramètres pour un fonction:
    typeRetourner  fonction (paramètre1, paramètre2,...){
        code à exécuter
    }
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
NB:
    Si les données à retourner d'une fonction sont nombreuses il est préferable 
    de les enregistrées dans un tableau et au moment de l'appel des résultats de 
    la fonction on utilise une boucle pour parcourir lre tableau et afficher les
    résultats 
*/

#include<stdio.h>
int nombreDouble(int a , int b) {
        return a, 2*a ;
    }

int main(){

    int tableauDesNombresDouble [8], i;
        tableauDesNombresDouble[0] = nombreDouble (1 ,1) ;    
        tableauDesNombresDouble[1] = nombreDouble (2 ,2) ;
        tableauDesNombresDouble[2] = nombreDouble (3 ,3) ;
        tableauDesNombresDouble[3] = nombreDouble (4 ,4) ;
        tableauDesNombresDouble[4] = nombreDouble (5 ,5) ;
        tableauDesNombresDouble[5] = nombreDouble (6 ,6) ;
        tableauDesNombresDouble[6] = nombreDouble (7 ,7) ;
        tableauDesNombresDouble[7] = nombreDouble (8 ,8) ;
for (i = 0; i < 8 ; i++){
printf("Le double de: %d est: %d\n", i+1, tableauDesNombresDouble[i]);
}

return 0 ;
}
    