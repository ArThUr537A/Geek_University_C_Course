// Faça um programa que leia um número inteiro e o imprima
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    //Declara uma variável inteira
    int n;

    //Imprime a mensagem na tela
    printf("Digite um número inteiro: ");

    //Solicita o valor
    scanf("%d", &n);

    //Imprime o valor digitado
    printf("Você digitou: %d", n);
    return 0;
}
