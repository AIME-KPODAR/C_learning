// Table de multiplication par 3 
#include<stdio.h>


int i  , multiplicateur = 3 ;
int main(){
    printf("Table de multiplication per 3: \n");
    for (i = 0 ; i <10 ; i++){
        printf("%d x %d = %d\n", multiplicateur, i, multiplicateur*i);
    }
    return 0;
}