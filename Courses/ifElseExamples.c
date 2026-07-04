// Ecrivons un script permettant d'ouvrir une coffrevérouillée 

#include<stdio.h>

int passWord = 010 ;
int main(){
    if (passWord == passWord){
        printf("Coffre ouvert");
    }
    else {printf("Alerte");}
    return 0;
}