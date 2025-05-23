/*
Faça um programa que leia um vetor de 10 posições e atribua valor 0 para todos os elementos que 
possuírem valores negativos
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
    int vetor[10];
    vetor[0] = -4;
    vetor[1] = 5;
    vetor[2] = 1;
    vetor[3] = -8;
    vetor[4] = 3;
    vetor[5] = 9;
    vetor[6] = 75;
    vetor[7] = -32;
    vetor[8] = 15;
    vetor[9] = -6;
    for(int i = 0; i<=9; i++){
        if (vetor[i] <= 0){
            printf("O vetor[%d] recebeu 0 pois é negativo\n", i);
            vetor[i] = 0;
             
        }
    }
}