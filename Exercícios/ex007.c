// Fa�a um programa que determine e mostre os cinco primeiros m�ltiplos de 3,
// considerando n�meros maiores que 0.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int num=3;

    for(int i = 1; i <= 5; i++){
        int multi = i*num;
        printf("O %d� multiplo de 3 �: %d\n", i, multi);
    }
    return 0;
}