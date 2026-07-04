/* EXERCICE 10
Ecrivons un programme se comportant comme une calculatrice
 */
#include<stdio.h>  
#include<string.h>                                                                
void removeSpace (char *ptr){
    int size = strlen(ptr);

    int j = 0 ;
    for (int i = 0 ; i < size ; i ++){
        if ( ptr[i] == ' ')
        {
            continue;
        }
        ptr[j] = ptr[i];
        j++;
    }
    ptr[j] = '\0';
}
char getOperator (char *ptr){
    int size = strlen(ptr);

    for (int i = 0 ; i < size ; i ++)
    {
        switch(ptr[i])
        {
            case '*':
            case '/':
            case '+':
            case '-':
            case '%':
                char ch = ptr[i];
                ptr[i] = ' ';
                return ch;
            default:
                break;
            
        }
    }
    return ' ';
}
void calculatrice (){
    // Tableau pour enregistrer l'entrée utilisateur
    char input_Table [] = {} ;

    // Variables
    int input , reponse ;
    char operateur [50] ,moins = '-' , plus = '+' , fois = '*' ,div = '/' , reste = '%' ;
    
    // Entrée utilisateur
    printf("Faire un calcul: ") ;
    fgets(operateur , sizeof(operateur), stdin) ;
    

    // Sortie
removeSpace(operateur);
    printf("%s\n",  operateur) ;
    char op = getOperator(operateur);
    printf("%s\n",  operateur) ;
    int operand1, operand2;
    sscanf(operateur, "%d %d", &operand1, &operand2);
    printf("%d%c%d = ", operand1, op, operand2) ;
    int resultat = 0;
    switch(op)
    {
        case '*':
        resultat = operand1 * operand2;
        break;
        case '/':
            if(operand2 == 0){
                printf("\nErreur: division par zero\n") ;
                return;
            }
        resultat = operand1 / operand2;
        break;
        case '+':
        resultat = operand1 + operand2;
        break;
        case '-':
        resultat = operand1 - operand2;
        break;
        case '%':
        resultat = operand1 % operand2;
        break;
        default:
            printf("\nErreur: operateur inconnu\n") ;
            return;
        
    }
    printf("%d\n",  resultat) ;
}
int main (){
calculatrice () ;
    return 0 ;
}