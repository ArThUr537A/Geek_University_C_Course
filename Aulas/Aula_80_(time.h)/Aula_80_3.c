#include <stdio.h>
#include <time.h>

//time()

int main(){
   time_t segundos;
   
   segundos = time(NULL);
   printf("Horas desde 1 de janeiro 1970 = %ld", segundos/3600);


   return 0;    
}