/*Faça um programa que contenha um array de inteiros contendo 5 elementos. Utilizando apenas aritmética 
de ponteiros, leia este array do teclado e imprima o dobro de cada valor lido.
*/
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
    int vetor[5];
    for(int i=0; i<5; i++){
        printf("Digite o %dº valor: ", i+1);
        scanf("%d", &vetor[i]);
    }
    int* ponteiro_vetor = vetor;
    for(int i=0; i<5; i++){
        printf("O %dº multiplicado por 2 é %d\n", i+1, *(ponteiro_vetor+i)*2);
    }
    return 0;
}