#include <stdio.h>
#include <locale.h>
#include "ajuda.h"

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
    int n1, n2, ret_s, ret_m;

    mensagem();

    printf("Informe o primeiro n�mero: ");
    scanf("%d", &n1);

    printf("Informe o segundo n�mero: ");
    scanf("%d", &n2);

    ret_s = soma(n1, n2);
    printf("A soma de %d com %d � %d\n", n1, n2, ret_s);

    ret_m = multiplicacao(n1, n2);
    printf("A multiplica��o de %d com %d � %d", n1, n2, ret_m);

    return 0;
}