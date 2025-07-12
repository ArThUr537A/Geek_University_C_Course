/*
1. Crie um programa que: 
a) Aloque dinamicamente um array de 5 números inteiros; 
b) Peça para o usuário informar os 5 números no espaço alocado; 
c) Mostre na tela os 5 valores; 
d) Libere a memória alocada;
*/

#include <stdio.h>
#include <stdlib.h>

int main( void ){
   
   int vetor[4];
   int *ponteiro;

   ponteiro = (int*) malloc(sizeof(vetor));
      for(int i = 0; i < 5; i++){
         printf("Informe o valor para posição %d do vetor: ", i+1);
         scanf("%d", &ponteiro[i]);  
      }
      for(int i = 0; i < 5; i++){
         printf("O valor na posição %d é %d\n", i+1, sizeof(ponteiro[i]));  
      }

   free(ponteiro);
   ponteiro = NULL;

   return 0;    
}
