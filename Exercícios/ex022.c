/*Crie um programa que leia o nome, a idade e o endere�o de uma pessoa e armazene os dados em uma 
struct.*/
#include <stdio.h>
#include <locale.h>

struct informacoes{
    char nome[50];
    int idade;
    char endereco[50];
};

int main(void){
   setlocale(LC_ALL, "Portuguese_Brazil");
   struct informacoes pessoa;

   printf("Informe o nome da pessoa: ");
   fgets(pessoa.nome, 50, stdin);

   printf("Informe a idade da pessoa: ");
   scanf("%d", &pessoa.idade);
   getchar();

   printf("Informe o endere�o: ");
   fgets(pessoa.endereco, 50, stdin);

   printf("+_+_+_+_+_+INFORMA��ES+_+_+_+_+_+\n");
   printf("Nome: %s\n", strtok(pessoa.nome, "\n"));
   printf("Idade: %d\n", pessoa.idade);
   printf("Endere�o: %s\n", pessoa.endereco);

   return 0;
}