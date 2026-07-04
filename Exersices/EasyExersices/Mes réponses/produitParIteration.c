/*Ecrivons un algorithme qui lit deux entiers a et b saisi au clavier
 et affiche leurs produits selon l'algorithme itératif suivant:
36 * 7  = 36 * 6 + 36
        = 72 * 3 + 36
        = 72 * 2 + 108
        = 144 * 1 + 108
        = 144 * 0 + 252
        = 252
*/

#include <stdio.h>
#include <stdbool.h>
//#include <stdlib.h>
#include <string.h>


char string[64];
void produitParIteration()
{
    int a, b, resultat;
    printf("Veuillez entrez deux nombres entiers\n");
    printf("Entrez le premier entier: ");
    scanf("%d", &a);
    printf("Entrez le second entier: ");
    scanf("%d", &b);
    int size = snprintf(string, sizeof(string), "%d * %d ", a, b);
    printf("%s", string);
    int r = 0;
    bool start = false;
    while (b != 0)
    {
        if(start == true)
        {
            for(int i=0; i<size; i++)
            {
                printf(" ");
            }
        }
        start = true;
        if (b % 2 != 0)
        {
            b = b - 1;
            r += a;
        }
        else
        {
            a = a * 2;
            b = b/2;
        }
        printf("= %d * %d + %d\n", a, b, r);
    }
    for(int i=0; i<size; i++)
    {
        printf(" ");
    }
    printf("= %d \n", r);

}

int main()
{
    produitParIteration();
    return 0;
}