#include <stdio.h>
#include <stdlib.h>

int main(){

   int qtd, *p;

   printf("Informe a quantidade de elemntos para o vetor: ");
   scanf("%d", &qtd);

   p = (int*) malloc(qtd * sizeof(int)); // 3 * 4 == 12 byte


   for(int i = 0; i < qtd; i++){
      printf("Informe o valor para a posição %d do vetor: ", i);
      scanf("%d", &p[i]); 
   }
   
   for(int i = 0; i < qtd; i++){
      printf("No vetor 'numeros[%d]' está o valor: %d \n", i, p[i]); 
   }

   qtd = qtd * sizeof(int);

   printf("A variável 'p' ocupa %d bytes em memória.\n", qtd);

   //liberar a memória (desalocar)
   free(p);
   p = NULL; // medida de segurança 

   return 0;    
}