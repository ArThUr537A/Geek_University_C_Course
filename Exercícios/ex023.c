/*Crie um programa que tenha uma struct chamada aluno contendo nome, n�mero de matr�cula e curso. 
Leia do usu�rio a informa��o de 5 alunos, armazene em um vetor desta estrutura e imprima os dados na 
tela.*/

#include <stdio.h>
#include <locale.h>

struct str_aluno{
    char nome[50];
    char matricula[50];
    char curso[50];
}aluno[5];

int main( void ){
    setlocale(LC_ALL, "Portuguese_Brazil");

   for(int i = 0; i < 5; i++ ){
    printf("Nome do aluno: ");
    fgets(aluno[i].nome, 50, stdin);

    printf("Matricula do aluno: ");
    fgets(aluno[i].matricula, 50, stdin);

    printf("Curso do aluno: ");
    fgets(aluno[i].curso, 50, stdin);
   }
   for(int i = 0; i < 5; i++ ){
    printf("=-=-=-=-=-=-=-= %d� ALUNO=-=-=-=-=-=-=-=\n", i + 1);
    printf("Nome: %s", aluno[i].nome);
    printf("Matr�cula: %s", aluno[i].matricula);
    printf("Curso: %s\n", aluno[i].curso);
   }

   return 0; 
}