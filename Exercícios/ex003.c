// Leia um n�mero e imprima o resultado do quadrado deste n�mero
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    //Declara a vari�vel
    int n;
    
    //Imprime e solicita o valor
    printf("Digite um n�mero: ");
    scanf("%d", &n);

    //Guarda o resultado em uma vari�vel
    int quadrado = n * n;

    //Imprime o resultado
    printf("%d� = %d", n, quadrado);

    return 0;
}
