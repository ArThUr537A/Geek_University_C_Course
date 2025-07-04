#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//rand()

// Primeira vez, 41, 45, 51, 26, 15, 47

// Após inicializar o gerador
    // 1ª vez 20, 10, 26, 28, 18, 20
    // 2ª vez 11, 40, 59, 31, 55, 43
    // 3ª vez 54, 11,  6, 45,  2, 55
int main(){
   time_t t;

   //inicializar o gerador
   srand((unsigned) time(&t));

   //Gerar 6 números entre 0 e 60
   for(int i = 0; i < 6; i++){
      printf( "%d\n", rand() % 61 ); 
   }
   return 0;    
}