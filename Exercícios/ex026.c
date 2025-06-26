#include <stdio.h>
#include <locale.h>

int fatorial(int N){

   if(N == 0 ){
      return 1;
   }else{
      return N * fatorial(N-1);
   }       
}

int main(void){
   setlocale(LC_ALL, "Portuguese_Brazil"); 

   int N;  
   printf("Número: ");
   scanf("%d", &N); 
   printf("Fatorial de %d é %d", N, fatorial(N));

   return 0;
}