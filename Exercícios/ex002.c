//Pe�a ao usu�rio para digitar tr�s valores inteiros e imprima a soma deles
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    //Declara as as 3 vari�veis
    int n_1, n_2, n_3;

    //Imprime a mensagem e solicita os valores
    printf("Digite o 1� valor: ");
    scanf("%d", &n_1);

    printf("Digite o 2� valor: ");
    scanf("%d", &n_2);

    printf("Digite o 3� valor: ");
    scanf("%d", &n_3);
    
    //Realiza a soma
    int soma = n_1 + n_2 + n_3;

    //Imprime a soma
    printf("%d + %d + %d = %d", n_1, n_2, n_3, soma);

    return 0;
}