/*
3. Faça um programa que receba do usuário o tamanho de uma string e chame uma função para locar 
dinamicamente essa string. Receba esta string do usuário. Por fim, apresente conteúdo dessa string sem 
suas vogais.
*/
#include <stdio.h>
#include <stdlib.h>


int main(){
   int tamanho;
   char *ponteiro; 
   
   printf("Informe o tamanho da string a ser informada: ");
   scanf("%d", &tamanho);
   getchar();

   ponteiro = (char*) malloc(sizeof(char) * tamanho + 1);

   printf("Informe a string: ");
   fgets(ponteiro, tamanho + 1, stdin);

   for(int i = 0; i <= tamanho; i++){
   
      if(*(ponteiro + i) != 'a' && *(ponteiro + i) != 'A' && *(ponteiro + i) != 'e' && *(ponteiro + i) != 'E' && *(ponteiro + i) != 'i' && *(ponteiro + i) != 'I' && *(ponteiro + i) != 'o' && *(ponteiro + i) != 'O' && *(ponteiro + i) != 'u' && *(ponteiro + i) != 'U' ){
         printf("%c", *(ponteiro+ i)); 
      } 
   }

   return 0;    
}