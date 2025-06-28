/*Crie um programa que tenha uma fun��o recursiva que receba um valor inteiro e converta este n�mero 
para bin�rio.*/

#include <stdio.h>

int binario(int N){
    if(N <= 1) return N;
    return (N % 2 + 10*binario(N/2));
}


int main( void ){
   int N = 7;
   printf("%d", binario(N));  
   return 0;
}