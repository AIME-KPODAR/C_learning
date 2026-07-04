/*  EXERCICE 14
Ecrivons un programme qui affiche le nombre de jours du mois
*/

#include<stdio.h>
int nb_mois [12]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

void nb_jours_ds_mois(int nb_mois[12]) {
    for(int i = 1; i <= 12; i++){
       switch ( nb_mois[i-1] )
        {
       case 1:
        printf("Janvier ");break;
        case 2:
           printf("Fevrir ");break;
        case 3:
           printf("Mars ");break;
        case 4:
            printf("Avril ");break;
        case 5:
           printf("Mais ");break;
        case 6:
           printf("Juin ");break;
        case 7:
            printf("Juillet ");break;
        case 8:
           printf("Aout ");break;
        case 9:
           printf("Septembre ");break;
        case 10:
            printf("Octobre ");break;
        case 11:
           printf("Novembre ");break;
        case 12:
           printf("Decembre ");break;
        default:
        break;
        }
        if(i == 2 ){
            printf("-> le nombre de jours est: 28 jours\n");
        } else if (i % 2 == 0 && i <= 7 || i % 2 != 0 && i > 7)
        {
           printf("-> le nombre de jours est: 30 jours\n");
        }else {
            printf("-> le nombre de jours est: 31 jours\n") ;
        }
    }
     
}

int main () {
nb_jours_ds_mois (nb_mois) ;
    return 0 ;
}