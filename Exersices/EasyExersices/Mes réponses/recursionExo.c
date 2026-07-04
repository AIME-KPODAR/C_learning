/* Ecrivons une fonction récursive permettant de traduire un nombre
en nombre romain
*/

#include <stdio.h>
char userInput[50];
// Entrer utilisateur
void saisirUnNombre()
{
    
    printf("Veillez saisir un chiffre romain: ");
    fgets(userInput, sizeof(userInput), stdin);
    printf("Votre chiffre romain saisi est: %s\n", userInput);
};

// Structure
struct romain
{
    char rom;
    int val;
};

// Tableau de structure de nombre romain
struct romain conf[7] = {{.rom = 'M', .val = 1000},
                         {.rom = 'D', .val = 500},
                         {.rom = 'C', .val = 100},
                         {.rom = 'L', .val = 50},
                         {.rom = 'X', .val = 10},
                         {.rom = 'V', .val = 5},
                         {.rom = 'I', .val = 1}

};

// Attributeur : chiffre romain en nombre decimal
int convertisseur(char rom){
struct romain * p = conf;
printf("addr = %p | addr++ = %p | calcul = %p \n", p, p+1, (uintptr_t)p + sizeof(struct romain));
    for (int i = 0 ; i < 7 ; i++ ){
        if(conf[i].rom == rom){
            return conf [i].val ;
        }
    } 
    return 0 ;
}

// Fonction recursive 
// input == &input[0] 
int recurse (char input []){
    char * p = input;
    if (input [0]== '\0') {
        return 0 ;
    }
int varActuel = convertisseur(input [0]);
int varSuivant = convertisseur(input [1]) ;
 varSuivant = convertisseur(*(p+1)) ;
if (varActuel  < varSuivant){
    return recurse(&input[1]) - varActuel ;
}
return recurse(&input[1]) + varActuel ;
}


int main()
{

    saisirUnNombre();
   int resultat = recurse (userInput) ;
    printf("Votre conversion est: %d\n", resultat) ;
    return 0;
}