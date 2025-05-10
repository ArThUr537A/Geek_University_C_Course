// Leia um número e imprima o resultado do quadrado deste número
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    //Declara a variável
    int n;
    
    //Imprime e solicita o valor
    printf("Digite um número: ");
    scanf("%d", &n);

    //Guarda o resultado em uma variável
    int quadrado = n * n;

    //Imprime o resultado
    printf("%d² = %d", n, quadrado);

    return 0;
}
