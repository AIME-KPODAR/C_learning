/*Les variables boolénnes contiennent un ou deux valeurs 
elles retournent un entier : 1 pour True et 0 pour False
 elles utilisent le mot clé bool pour leurs créations
 et sont identifier par %i ou %d*/

#include<stdio.h>
#include<stdbool.h>
#include<stdint.h>
uint8_t data = 254;
uint16_t data16 = 254;
int32_t data32 = 254;
int64_t dt = 2000000000000;
    int main(){
        bool programmIsRunning = true;
        bool programmIsNotRunning = false;
        int k = 6;
        int l = 10;
        int L = 10;
        printf("Le progamme fonction: %d\n", programmIsRunning);                
        printf("Le progamme ne fonction pas: %d\n", programmIsNotRunning);   
        printf(" 6 est infereieur a 10: %i\n", k<l);
        printf(" 10 est egal a 10: %i\n", L==l);
        printf(" 6 est superieur a 10: %i", k>l);
        printf(" log: %lli\n", ++dt);
        printf(" log: %lli\n", ++dt);
        return 0;         
    }