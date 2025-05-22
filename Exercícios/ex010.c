/*
1. Faça um programa que possua um vetor denominado A que armazene 6 números inteiros. O programa
deve executar os seguintes passos:
a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7;
b) Armazene em uma variável inteira simples a soma entre os valores das 
posições A[0], A[1] e A[5] do vetor e mostre na tela esta soma;
c) Modifique o vetor na posição 4, atribuindo a esta posição o valor 100;
d) Mostre na tela cada valor do vetor A, um em cada linha. 


*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");

    //(a)
    int A[6];
    A[0] = 1;
    A[1] = 0;
    A[2] = 5;
    A[3] = -2;
    A[4] = -5;
    A[5] = 7;
    
    //(b)
    int soma = A[0] + A[1] + A[5];
    printf("essa é a soma: %d\n", soma);

    //(c)
    A[4] = 100;

    //(d)
    for(int i = 0; i<=5; i++){
        printf("%d\n", A[i]);
    }

    return 0;
}