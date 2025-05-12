//Estruturas de repeti��o for, while e do while

/*
do while
Utilizado quando voc� precisa de um loop
onde n�o se tenha um n�mero fixo de elementos
mas que tenha um crit�rio de parada e a condi��o
de parada � checada ap�s a primeira execu��o.

Problema:
Fa�a um programa, no qual receba e some n�meros
inteiros at� que o n�mero de entrada seja 0
e apresente a soma no final;
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
        int numero, soma = 0;

    //entrada
    printf("Informe um n�mero: ");
    scanf("%d", &numero);
    
    do{
        //entrada
        printf("Informe um n�mero: ");
        scanf("%d", &numero);
        //processamento
        soma = soma + numero;
    }
    while(numero !=0);
        //entrada
        printf("Informe um n�mero: ");

        printf("A soma %d", soma);
    
    return 0;
    }