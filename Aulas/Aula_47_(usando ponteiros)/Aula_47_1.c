#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    int n; //vari�vel que guarda seu valor na mem�ria

    int* p; //ponteiro � um valor que aponta para um endere�o
            //de mem�ria

    printf("Informe um n�mero: ");
    scanf("%d", &n);

    //Inicializando o ponteiro
    p = &n;

    printf("O numero informado %d", n);

    printf("O endere�o de memoria: %p\n", &n);

    printf("Endere�o do ponteiro %p", p);


    return 0;
}