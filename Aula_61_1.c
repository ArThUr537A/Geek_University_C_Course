#include <stdio.h>
#include <locale.h>

int main(){
   setlocale(LC_ALL, "Portuguese_Brazil");
   int numero=42;
   float nota=7.9;
   char letra ='d';
   double outraNota =19.5;
   
   printf("A variável 'numero' tem valor %d e ocupa %ld bytes em memória\n", numero, sizeof(numero));
   printf("A variável 'nota' tem valor %2.f e ocupa %ld bytes em memória\n", nota, sizeof(nota));
   printf("A variável 'letra' tem valor %c e ocupa %ld bytes em memória\n", letra, sizeof(letra));
   printf("A variável 'outraNota' tem valor %.2f e ocupa %ld bytes em memória\n", outraNota, sizeof(outraNota));

   return 0;
}