/*
2. Fa�a um programa que contenha duas vari�veis inteiras. 
Leia estas vari�veis do teclado. Em seguida, compare seus endere�os e exiba o 
conte�do do maior endere�o.
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
    
    int variavel_1;
    int variavel_2;

    printf("Digite o 1� valor: ");
    scanf("%d", &variavel_1);

    printf("Digite o 2� valor: ");
    scanf("%d", &variavel_2);

    int* ponteiro_1 = &variavel_1;
    int* ponteiro_2 = &variavel_2;


    printf("A 1� vari�vel foi %d com endere�o de memoria %p\n", variavel_1, ponteiro_1);
    printf("A 2� vari�vel foi %d com endere�o de memoria %p\n", variavel_2, ponteiro_2);
    

    if(&ponteiro_1 > &ponteiro_2){
        printf("O maior endere�o � %p", ponteiro_1);
    }else{
        printf("O maior endere�o � %p", ponteiro_2);
    } 

    return 0;
}