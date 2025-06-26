/*Crie um programa que tenha uma fun��o 
recursiva que receba um n�mero inteiro positivo N e calcula e 
apresente o somat�rio dos n�meros de 1 a N.*/

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
   printf("Soma dos %d primeiros n�meros � %d", N, somatorio(N));
   return 0;
}