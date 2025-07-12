#include <stdio.h>
#include <stdlib.h>

/*
Matriz Bidimensional
[00][01][02]
[10][11][12]
[20][21][22]

int -> 1 x 4 = 4 bytes
       2 x 4 = 8 bytes
       3 X 3 x 4 = 36 bytes 
*/


int main(){
   
   int *p, linhas = 3, colunas = 3;
   
   p = (int*) malloc(linhas * colunas * sizeof(int));
   
   for(int i = 0; i < linhas; i++){
      for(int j = 0; j < colunas; j++){
         p[i * colunas + j] = 3 * i + j;  
      }        
   }
   
   for(int i = 0; i < linhas; i++){
      for(int j = 0; j < colunas; j++){
         printf("%d\n", p[i * colunas + j] );  
      }        
   }

   free(p);
   p = NULL;
   return 0;    
}