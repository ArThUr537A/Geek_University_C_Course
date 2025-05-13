// Faça um programa que determine e mostre os cinco primeiros múltiplos de 3,
// considerando números maiores que 0.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int num=3;

    for(int i = 1; i <= 5; i++){
        int multi = i*num;
        printf("O %dº multiplo de 3 é: %d\n", i, multi);
    }
    return 0;
}