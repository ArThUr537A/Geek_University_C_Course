// Fa�a um programa que leia um n�mero inteiro e o imprima
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    //Declara uma vari�vel inteira
    int n;

    //Imprime a mensagem na tela
    printf("Digite um n�mero inteiro: ");

    //Solicita o valor
    scanf("%d", &n);

    //Imprime o valor digitado
    printf("Voc� digitou: %d", n);
    return 0;
}
