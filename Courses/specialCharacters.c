/* Le caractères spéciaux en C permet d'éviter les conflits au moment de la 
lecture du code par l'interpreteur et ils sont: \' ;\" ;\t ;\n ;\\ */

#include<stdio.h>

char coolName [] = "Je m\'appelle Aime";
int main (){
    printf("Voici ma presentation: %s", coolName);
return 0;
}