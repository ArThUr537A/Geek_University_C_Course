#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    int n; //variável que guarda seu valor na memória

    int* p; //ponteiro é um valor que aponta para um endereço
            //de memória

    printf("Informe um número: ");
    scanf("%d", &n);

    //Inicializando o ponteiro
    p = &n;

    printf("O numero informado %d", n);

    printf("O endereço de memoria: %p\n", &n);

    printf("Endereço do ponteiro %p", p);


    return 0;
}