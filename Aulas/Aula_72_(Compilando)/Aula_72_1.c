#include <stdio.h>

//Compilação via terminal

/*
* gcc arquivo-fonte (opcional) -o nome-programa
* gcc nome-do-programa.c -o nome-do-programa-executável.qualquer-coisa
*/

int main(){
    int qtd;

    printf("Quantos números você que somar? ");
    scanf("%d", &qtd);

    int  soma = 0;
    for(int i = 0; i < qtd; i++){
       soma = soma + i * 2 + 3;
    }
    printf("A soma é %d", soma);

    return 0;
}