/*Crie um programa que leia o nome, a idade e o endereço de uma pessoa e armazene os dados em uma 
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

   printf("Informe o endereço: ");
   fgets(pessoa.endereco, 50, stdin);

   printf("+_+_+_+_+_+INFORMAÇÕES+_+_+_+_+_+\n");
   printf("Nome: %s\n", strtok(pessoa.nome, "\n"));
   printf("Idade: %d\n", pessoa.idade);
   printf("Endereço: %s\n", pessoa.endereco);

   return 0;
}