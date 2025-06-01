#include <stdio.h>
#include <locale.h>


/*
O asterisco  diz para função que estamos recebendo um endereço de memoria
que aponta para variável.    
*/

void incrementa(int* contador){
    printf("Antes de incrementar.\n");
    printf("O contador vale %d\n", (*contador)); //(*contador) = valor
    printf("O endereço de memoria é %d\n", contador); //endereço de memoria

    printf("Depois de incrementar.\n");
    //valor = valor + 1;(valor++)
    //valor = valor - 1;(valor--)
    //valor++; (primeiro imprime dps incrementa)
    //++valor; (primeiro incrementa dps imprime)
    printf("O contador vale %d\n", ++(*contador));
    printf("O endereço de memoria é %d\n", contador);

}

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int contador = 10;
    printf("Antes de incrementar.\n");
    printf("O contador vale %d\n", contador);
    printf("O endereço de memoria é %d\n", &contador);

    incrementa(&contador);

    //scanf("%d", &contador);

    printf("Depois de incrementar.\n");
    printf("O contador vale %d\n", contador);
    printf("O endereço de memoria é %d\n", &contador);


    return 0;
}