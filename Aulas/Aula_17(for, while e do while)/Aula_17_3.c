//Estruturas de repetição for, while e do while

/*
do while
Utilizado quando você precisa de um loop
onde não se tenha um número fixo de elementos
mas que tenha um critério de parada e a condição
de parada é checada após a primeira execução.

Problema:
Faça um programa, no qual receba e some números
inteiros até que o número de entrada seja 0
e apresente a soma no final;
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
        int numero, soma = 0;

    //entrada
    printf("Informe um número: ");
    scanf("%d", &numero);
    
    do{
        //entrada
        printf("Informe um número: ");
        scanf("%d", &numero);
        //processamento
        soma = soma + numero;
    }
    while(numero !=0);
        //entrada
        printf("Informe um número: ");

        printf("A soma %d", soma);
    
    return 0;
    }