/*  EXERCICE 15
Ecrivons un programme qui affiche l'heure
*/

#include<stdio.h>
#include<time.h>
int Heures , Minutes, Secondes ;

void affiche_heure (int Heures , int Minutes, int Secondes) {

    // Heure, minute et seconde : tous en singulier
    if((Heures > 1) &&( Minutes <= 1) && (Secondes <= 1) ){
        printf("Il est %d heure %d minute %d seconde\n",Heures, Minutes, Secondes);
    }

    // Heure en pluriel ; minute et seconde en singulier
    else if ((Heures > 1) && (Minutes <= 1) && (Secondes <= 1)){
        printf("Il est %d heures %d minute %d seconde\n",Heures, Minutes, Secondes) ;
    }

    // Heure et seconde en singulier ; minute en pluriel 
    else if ((Heures <= 1) && (Minutes > 1) && (Secondes <= 1))
    {
        printf("Il est %d heure %d minutes %d seconde\n",Heures, Minutes, Secondes) ;
    }

    // Heure et minute en singulier ; seconde en pluriel 
    else if ((Heures <= 1) && (Minutes <= 1) && (Secondes > 1))
    {
        printf("Il est %d heure %d minute %d secondes\n",Heures, Minutes, Secondes) ;
    }

    // Heure, minute et seconde : tous en pluriel
    else if ((Heures > 1) && (Minutes > 1) && (Secondes > 1))
    {
        printf("Il est %d heures %d minutes %d secondes\n",Heures, Minutes, Secondes) ;
    }

    // Heure et minute en pluriel ; seconde en singulier
    else if ((Heures > 1 )&& (Minutes > 1 )&& (Secondes <= 1))
    {
        printf("Il est %d heures %d minutes %d seconde\n",Heures, Minutes, Secondes) ;
    }

    // Heure et seconde en pluriel ; minute en singulier
    else if ((Heures > 1) && (Minutes <= 1 )&& (Secondes > 1))
    {
        printf("Il est %d heures %d minute %d secondes\n",Heures, Minutes, Secondes) ;
    }

    // Heure en singulier ; minute et seconde en pluriel
    else if ((Heures <= 1) &&( Minutes > 1) && (Secondes > 1))
    {
        printf("Il est %d heure %d minutes %d secondes\n",Heures, Minutes, Secondes) ;
    }

}


void affiche_heure_v2 (int Heures , int Minutes, int Secondes) {

char heure =' ', minute = ' ', seconde = ' ';

if ( Heures > 1){
    heure = 's' ;
}
if (Minutes > 1){
    minute = 's' ;
}
if (Secondes > 1){
    seconde = 's' ;
}
    
    printf("Il est %d heure%c %d minute%c %d seconde%c\n",Heures,heure, Minutes,minute, Secondes,seconde) ;

}

void affiche_heure_v3 (int Heures , int Minutes, int Secondes) {

char heure[2] ="", minute[2] ="" , seconde [2]= "";

if ( Heures > 1){
    heure [0] = 's' ;
}
if (Minutes > 1){
    minute[0] = 's' ;
}
if (Secondes > 1){
    seconde[0] = 's' ;
}
    
    printf("Il est %d heure%s %d minute%s %d seconde%s\n",Heures,heure, Minutes,minute, Secondes,seconde) ;

}
void saisir_heure (Heures , Minutes , Secondes){

    printf("Veillez saisir l'heure \n Exemple: 14:50:30 -> Ceci est l'heure saisie\n");
    printf("Saisissez l'heure maintenant: ");
    scanf("%d %d %d", Heures,Minutes,Secondes) ;
    
}
int main () {
saisir_heure ( ) ;
    return 0 ;
} 
