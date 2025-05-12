//Estruturas de repetição for, while e do while
/*
Utilizando o For (para)

Façaa um programa no qual receba e some 5 números
inteiros e apresente a soma no final;
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    //variáveis
    int numero, soma=0;

    //para o int i iniciando em 0; quando i<5; incrementa o i em 1
    //inicializaçãoo, critrério de parada, forma de incremento
    for(int i = 0; i < 5; i++){
        //entrada
        printf("Informe um número: ");
        scanf("%d", &numero);
        //processameto
        soma = soma + numero;
    }

    //saída
    printf("A soma é %d", soma);
    
    return 0;
}