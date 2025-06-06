/*
2. Faça um programa que contenha duas variáveis inteiras. 
Leia estas variáveis do teclado. Em seguida, compare seus endereços e exiba o 
conteúdo do maior endereço.
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
    
    int variavel_1;
    int variavel_2;

    printf("Digite o 1º valor: ");
    scanf("%d", &variavel_1);

    printf("Digite o 2º valor: ");
    scanf("%d", &variavel_2);

    int* ponteiro_1 = &variavel_1;
    int* ponteiro_2 = &variavel_2;


    printf("A 1º variável foi %d com endereço de memoria %p\n", variavel_1, ponteiro_1);
    printf("A 2º variável foi %d com endereço de memoria %p\n", variavel_2, ponteiro_2);
    

    if(&ponteiro_1 > &ponteiro_2){
        printf("O maior endereço é %p", ponteiro_1);
    }else{
        printf("O maior endereço é %p", ponteiro_2);
    } 

    return 0;
}