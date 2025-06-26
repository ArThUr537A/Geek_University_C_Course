/*Crie um programa que tenha uma função 
recursiva que receba um número inteiro positivo N e calcula e 
apresente o somatório dos números de 1 a N.*/

int somatorio(int N){
   if(N <= 1){
      return N; 
   }else{
      return N + somatorio(N - 1);
   }
}

#include <stdio.h>

int main(){
   int N = -15; 
   somatorio(N);
   printf("Soma dos %d primeiros números é %d", N, somatorio(N));
   return 0;
}