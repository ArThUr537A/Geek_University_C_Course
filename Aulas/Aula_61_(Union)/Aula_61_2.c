#include <stdio.h>
#include <locale.h>
#include <string.h>

// A union, separa e utiliza apenas o espaço da maior variável.
union pessoa{
   char nome[100]; //1 char = 1 byte -> 1*100 = 100bytes
   int idade; // 4 bytes -> total de 104 bytes 
};

int main(){
   setlocale(LC_ALL, "Portuguese_Brazil");
   
   union pessoa pes;
   strcpy(pes.nome, "Angelina Jolie");
   printf("Dados de %s\n", pes.nome);

   pes.idade = 39;
   printf("Ela tem %d anos\n", pes.idade);

   printf("A variável 'pes' está ocupando %ld bytes em memória.", sizeof(pes));

   return 0;
}