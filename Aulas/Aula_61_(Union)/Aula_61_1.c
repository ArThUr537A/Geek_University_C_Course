#include <stdio.h>
#include <locale.h>

int main(){
   setlocale(LC_ALL, "Portuguese_Brazil");
   int numero=42;
   float nota=7.9;
   char letra ='d';
   double outraNota =19.5;
   
   printf("A vari�vel 'numero' tem valor %d e ocupa %ld bytes em mem�ria\n", numero, sizeof(numero));
   printf("A vari�vel 'nota' tem valor %2.f e ocupa %ld bytes em mem�ria\n", nota, sizeof(nota));
   printf("A vari�vel 'letra' tem valor %c e ocupa %ld bytes em mem�ria\n", letra, sizeof(letra));
   printf("A vari�vel 'outraNota' tem valor %.2f e ocupa %ld bytes em mem�ria\n", outraNota, sizeof(outraNota));

   return 0;
}