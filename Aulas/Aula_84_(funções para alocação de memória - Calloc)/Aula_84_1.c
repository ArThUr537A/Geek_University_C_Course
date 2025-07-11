#include <stdio.h>
#include <stdlib.h>

//calloc()


/**/

int main(){

   int *p;

   //p = (int*) malloc(3 * sizeof(int)); // 3 * 4 == 12 byte, não remove lixo da memória
   p = (int*) calloc(3, sizeof(int)); // 3 * 4 == 12 byte, zera o espaço em memória

   if(p){

      p[0] = 6;
      p[1] = 12;
      p[2] = 34;
       
      printf("A variável 'p' ocupa %ld bytes em memória.\n", 3 * sizeof(int));
      printf("Valor de p[0] = %d\n", p[0]);
      printf("Valor de p[0] = %d\n", p[1]); 
      printf("Valor de p[0] = %d\n", p[2]);  
   }else{
       printf("Erro: Memória insuficiente!!!");
   }

   //liberar a memória (desalocar)
   free(p);
   p = NULL; // medida de segurança 

   return 0;    
}