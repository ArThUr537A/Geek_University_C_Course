#include <stdio.h>


#ifndef PI
    #define PI 3.1415 //constante   
    
#endif

//ifndef - Diretiva de compilação

int main(){
   int valor = 5;
   valor = 467;

   printf("O valor é %d\n", valor);

   printf("2PI vale %f\n", 2*PI);

   return 0;
}