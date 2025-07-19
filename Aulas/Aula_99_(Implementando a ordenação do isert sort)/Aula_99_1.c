#include <stdio.h>

void insert_sort(int vetor[], int tam){
   int troca;
   
   //Percorrer todo o vetor
   for(int i = 1; i < tam; i++){
      int proximo = i;
      
      //Responsável pelas trocas
      while((proximo != 0) && (vetor[proximo] < vetor[proximo - 1])){
         troca = vetor[proximo];
         vetor[proximo] = vetor[proximo - 1];
         vetor[proximo - 1] = troca;
         proximo--;  
      }  
   }
}


int main(){
   
   //vetor desordenado 
   int vetor[6] = {8, 3, 1, 42, 12, 5}; 
   
   //Função de ordenação utilizando Insert Sort
   insert_sort(vetor, 6);

   //Apresentar vetor ordenado
   for(int i = 0; i < 6; i++){
    printf("%d\n", vetor[i]);
   }

   return 0;    
}