#include <stdio.h>

int main(){

   int numeros[3]; //0...n-1 -> 0...2
   numeros[0] = 55;
   numeros[1] = 43;
   numeros[2] =2;

   printf("A variável 'numeros[0]' vale %d e ocupa %d bytes em memória.\n", numeros[0], sizeof(numeros[0]));
   printf("A variável 'numeros[1]' vale %d e ocupa %d bytes em memória.\n", numeros[1], sizeof(numeros[1]));
   printf("A variável 'numeros[2]' vale %d e ocupa %d bytes em memória.\n", numeros[2], sizeof(numeros[2]));
   printf("A variável 'numeros' ocupa %d bytes em memória.\n", sizeof(numeros));



   return 0;    
}