/*Crie um programa que tenha uma função recursiva que receba um valor inteiro e converta este número 
para binário.*/

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