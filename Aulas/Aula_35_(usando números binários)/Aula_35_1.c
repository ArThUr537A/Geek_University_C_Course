#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");

    int valor = 2;
    printf("Valor vale %d\n", valor);

    //deslocamento de bits para esquerda
    valor = valor << 2;
    printf("Valor vale %d\n", valor);

    valor = 2;
    //deslcoamento de bits para direita
    valor = valor >> 1;
    printf("Valor vale %d\n", valor);

    valor = 2;
    //negação
    valor = ~valor;
    printf("Valor vale %d\n", valor);

    return 0;
}