//Estruturas de repeti��o for, while e do while
/*
Utilizando o For (para)

Fa�aa um programa no qual receba e some 5 n�meros
inteiros e apresente a soma no final;
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    //vari�veis
    int numero, soma=0;

    //para o int i iniciando em 0; quando i<5; incrementa o i em 1
    //inicializa��oo, critr�rio de parada, forma de incremento
    for(int i = 0; i < 5; i++){
        //entrada
        printf("Informe um n�mero: ");
        scanf("%d", &numero);
        //processameto
        soma = soma + numero;
    }

    //sa�da
    printf("A soma � %d", soma);
    
    return 0;
}