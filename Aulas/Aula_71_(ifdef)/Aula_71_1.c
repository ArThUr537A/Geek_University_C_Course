#include <stdio.h>


//#ifndef PI
//    #define PI 3.1415 //constante   

//#endif

//ifndef - Diretiva de compila��o

int main(){
   int valor = 5;
   valor = 467;

   printf("O valor � %d\n", valor);

   //printf("2PI vale %f\n", 2*PI);

   #ifdef PI
      printf("O valor de PI � %f\n", PI);
   #endif

   return 0;
}