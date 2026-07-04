/*  CORRECTION DE L'ERXERCICE 8
Simulation de la division
*/

#include<stdio.h>
void simulateur (){
    // Déclaration de deux entiers à diviser 
    int saisi1 , saisi2 ;
    // Déclaration et initialisation du quotient de la division 
    int quotient = 0 ;
    // Déclaration de deux entiers tampons plusPetit et plusGrand 
    int plusPetit , plusGrand ;
    //Déclaration d'une sauvegarde
    int save ;

    // Saisie de saisi1 et saisi2 
    printf("Premier entier: ") ; scanf("%d", &saisi1) ;
    printf("Deuxieme entier: ") ; scanf("%d", &saisi2) ; 
    
    // Si saisi1 est plus grand que saisi2 
    if (saisi1 > saisi2){
        /*plusGrand et save sont égaux à saisi1 (le plus grand des deux)
          et le plus petit est égal à saisi2 (le plus petit des deux)
        */
       plusGrand = saisi1 ; plusPetit = saisi2 ; save = saisi1 ;
    }
    // Si saisi1 est plus petit ou égal à saisi2 
    else{
        /*plusGrand et save sont égaux à saisi2 (le plus grand des deux)
          et plusPetit est égal à saisi1 (le plus petit des deux)
          */
         plusGrand = saisi2 ; plusPetit = saisi1 ; save = saisi2 ;
    }
    // Tant que plusGrand est plus grand que plusPetit 
    while (plusGrand >= plusPetit){
        // Incrémentation de quotient
        quotient ++ ;
        // Soutraction de plusPetit à plusGrand
        plusGrand -= plusPetit ;
    } // Fin de while (plusGrand >= plusPetit)
    
    // Affichage des résultats 
    printf("Quotient de %d par %d = %d\n", save, plusPetit , quotient) ;
    printf("Reste = %d", plusGrand) ;    

}
int main (){
simulateur () ;
    return 0 ;
}