/*La relation existant entre les pointeurs et les tableaux est que 
on peut utiliser le pointeur pour parcourir un tableau via une boucle, 
changer un élément du tableau
NB:
    l'espace mémoire d'un tableau est le même que celle du premier 
    élément de ce tableau    
*/


#include<stdio.h>
int score [4] = {1, 2, 3} ;
int *ptr = score , i ;

int main(){
    printf("Adresse memoire du tableau: %p\n", score);
    printf("Adresse memoire du premier element du tableau: %p\n", &score[0]);
    for(i = 0; i < 3; i++){
        printf("moi je suis dans une boucle sans pointeur: %d\n", score[i]);    
    }
    for(i = 0; i < 3; i++){
        printf("moi je suis dans une boucle de pointeur: %d\n", *(ptr +i));
        
    }
printf("Pointeur: %p\n", ptr);

return 0;    
}