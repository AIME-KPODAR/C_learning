/*Ecrivons un programme qui affiche le code ASCII*/

#include<stdio.h>
struct structureAsciiCode
{
    char lettre ;
    int numero1 , numero2 ;
   
};

int main () {
struct structureAsciiCode varA ,varB ,varC ,varD , varE ,varF 
,varG ,varH ,varI ,varJ ,varK ,varL , varM ,varN ,varO ,varP ,
varQ ,varR ,varS ,varT ,varU , varV ,varW ,varX ,varY ,varZ , 
var1 ,var2 ,var3 ,var4 , var5 ,var6 ,var7 ,var8 ,var9;
varA.lettre = 'A';varA.numero1 = 65 ;varA.numero2 = 41 ;
varB.lettre = 'B' ;varB.numero1 = 66 ;varB.numero2 = 42 ;
varC.lettre = 'C' ;varC.numero1 = 67 ;varC.numero2 = 43 ;
varD.lettre = 'D' ;varD.numero1 = 68 ;varD.numero2 = 44 ;
varE.lettre = 'E' ;varE.numero1 = 66 ;varE.numero2 = 45 ;
varF.lettre = 'F' ;varF.numero1 = 70 ;varF.numero2 = 46 ;
varG.lettre = 'G' ;varG.numero1 = 71 ;varG.numero2 = 47 ;
varH.lettre = 'H' ;varH.numero1 = 72 ;varH.numero2 = 48 ;
varI.lettre = 'I' ;varI.numero1 = 73 ;varI.numero2 = 49 ;
varJ.lettre = 'J' ;varJ.numero1 = 74 ;varJ.numero2 = 50 ;
varK.lettre = 'K' ;varK.numero1 = 75 ;varK.numero2 = 51 ;
varL.lettre = 'L' ;varL.numero1 = 76 ;varL.numero2 = 52 ;
varM.lettre = 'M' ;varM.numero1 = 77 ;varM.numero2 = 53 ;
varN.lettre = 'N' ;varN.numero1 = 78 ;varN.numero2 = 54 ;
varO.lettre = 'O' ;varO.numero1 = 79 ;varO.numero2 = 55 ;
varP.lettre = 'P' ;varP.numero1 = 80 ;varP.numero2 = 56 ;
varQ.lettre = 'Q' ;varQ.numero1 = 81 ;varQ.numero2 = 57 ;
varR.lettre = 'R' ;varR.numero1 = 82 ;varR.numero2 = 58 ;
varS.lettre = 'S' ;varS.numero1 = 83 ;varS.numero2 = 59 ;
varT.lettre = 'T' ;varT.numero1 = 84 ;varT.numero2 = 60 ;
varU.lettre = 'U' ;varU.numero1 = 85 ;varU.numero2 = 61 ;
varV.lettre = 'V' ;varV.numero1 = 86 ;varV.numero2 = 62 ;
varW.lettre = 'W' ;varW.numero1 = 87 ;varW.numero2 = 63 ;
varX.lettre = 'X' ;varX.numero1 = 88 ;varX.numero2 = 64 ;
varY.lettre = 'Y' ;varY.numero1 = 89 ;varY.numero2 = 65 ;
varZ.lettre = 'Z' ;varZ.numero1 = 90 ;varZ.numero2 = 66 ;
var1.lettre = '1';var1.numero1 = 49 ;var1.numero2 = 31 ;
var2.lettre = '2';var2.numero1 = 50 ;var2.numero2 = 32 ;
var3.lettre = '3';var3.numero1 = 51 ;var3.numero2 = 33 ;
var4.lettre = '4';var4.numero1 = 52 ;var4.numero2 = 34 ;
var5.lettre = '5';var5.numero1 = 53 ;var5.numero2 = 35 ;
var6.lettre = '6';var6.numero1 = 54 ;var6.numero2 = 36 ;
var7.lettre = '7';var7.numero1 = 55 ;var7.numero2 = 36 ;
var8.lettre = '8';var8.numero1 = 56 ;var8.numero2 = 37 ;
var9.lettre = '9';var9.numero1 = 57 ;var9.numero2 = 39 ;

printf("caractere = %c\tcode = %d\tcode hexa = %d\t\n",varA.lettre, varA.numero1 , varA.numero2) ;
printf("caractere = %c\tcode = %d\tcode hexa = %d\t\n",varB.lettre, varB.numero1 , varB.numero2) ;
printf("caractere = %c\tcode = %d\tcode hexa = %d\t\n",varC.lettre, varC.numero1 , varC.numero2) ;
printf("caractere = %c\tcode = %d\tcode hexa = %d\t\n",varD.lettre, varD.numero1 , varD.numero2) ;
printf("caractere = %c\tcode = %d\tcode hexa = %d\t\n",varE.lettre, varE.numero1 , varE.numero2) ;
printf("caractere = %c\tcode = %d\tcode hexa = %d\t\n",varF.lettre, varF.numero1 , varF.numero2) ;
printf("caractere = %c\tcode = %d\tcode hexa = %d\t\n",varG.lettre, varG.numero1 , varG.numero2) ;
printf("caractere = %c\tcode = %d\tcode hexa = %d\t\n",varH.lettre, varH.numero1 , varH.numero2) ;
printf("caractere = %c\tcode = %d\tcode hexa = %d\t\n",varI.lettre, varI.numero1 , varI.numero2) ;
printf("caractere = %c\tcode = %d\tcode hexa = %d\t\n",varJ.lettre, varJ.numero1 , varJ.numero2) ;
printf("caractere = %c\tcode = %d\tcode hexa = %d\t\n",varK.lettre, varK.numero1 , varK.numero2) ;
printf("caractere = %c\tcode = %d\tcode hexa = %d\t\n",varL.lettre, varL.numero1 , varL.numero2) ;
printf("caractere = %c\tcode = %d\tcode hexa = %d\t\n",varM.lettre, varM.numero1 , varM.numero2) ;
printf("caractere = %c\tcode = %d\tcode hexa = %d\t\n",varN.lettre, varN.numero1 , varN.numero2) ;
printf("caractere = %c\tcode = %d\tcode hexa = %d\t\n",varO.lettre, varO.numero1 , varO.numero2) ;
printf("caractere = %c\tcode = %d\tcode hexa = %d\t\n",varP.lettre, varP.numero1 , varP.numero2) ;
printf("caractere = %c\tcode = %d\tcode hexa = %d\t\n",varQ.lettre, varQ.numero1 , varQ.numero2) ;
printf("caractere = %c\tcode = %d\tcode hexa = %d\t\n",varR.lettre, varR.numero1 , varR.numero2) ;
printf("caractere = %c\tcode = %d\tcode hexa = %d\t\n",varS.lettre, varS.numero1 , varS.numero2) ;
printf("caractere = %c\tcode = %d\tcode hexa = %d\t\n",varT.lettre, varT.numero1 , varT.numero2) ;
printf("caractere = %c\tcode = %d\tcode hexa = %d\t\n",varU.lettre, varU.numero1 , varU.numero2) ;
printf("caractere = %c\tcode = %d\tcode hexa = %d\t\n",varV.lettre, varV.numero1 , varV.numero2) ;
printf("caractere = %c\tcode = %d\tcode hexa = %d\t\n",varW.lettre, varW.numero1 , varW.numero2) ;
printf("caractere = %c\tcode = %d\tcode hexa = %d\t\n",varX.lettre, varX.numero1 , varX.numero2) ;
printf("caractere = %c\tcode = %d\tcode hexa = %d\t\n",varY.lettre, varY.numero1 , varY.numero2) ;
printf("caractere = %c\tcode = %d\tcode hexa = %d\t\n",varZ.lettre, varZ.numero1 , varZ.numero2) ;
printf("\n") ;
printf("caractere = %c\tcode = %d\tcode hexa = %d\t\n",var1.lettre, var1.numero1 , var1.numero2) ;
printf("caractere = %c\tcode = %d\tcode hexa = %d\t\n",var2.lettre, var2.numero1 , var2.numero2) ;
printf("caractere = %c\tcode = %d\tcode hexa = %d\t\n",var3.lettre, var3.numero1 , var3.numero2) ;
printf("caractere = %c\tcode = %d\tcode hexa = %d\t\n",var4.lettre, var4.numero1 , var4.numero2) ;
printf("caractere = %c\tcode = %d\tcode hexa = %d\t\n",var5.lettre, var5.numero1 , var5.numero2) ;
printf("caractere = %c\tcode = %d\tcode hexa = %d\t\n",var6.lettre, var6.numero1 , var6.numero2) ;
printf("caractere = %c\tcode = %d\tcode hexa = %d\t\n",var7.lettre, var7.numero1 , var7.numero2) ;
printf("caractere = %c\tcode = %d\tcode hexa = %d\t\n",var8.lettre, var8.numero1 , var8.numero2) ;
printf("caractere = %c\tcode = %d\tcode hexa = %d\t\n",var9.lettre, var9.numero1 , var9.numero2) ;

   
   
  return 0 ;                             
}