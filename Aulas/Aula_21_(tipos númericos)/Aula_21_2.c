/*
Tipos de Dados

Tipos númericos
-Inteiros
-Reais
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    float media, nota1, nota2;

    printf("Qual a primeira nota? ");
    scanf("%f", &nota1);

    printf("Qual a segunda nota? ");
    scanf("%f", &nota2);

    media = (nota1 + nota2)/2;

    printf("Sua média é %.2f", media);

    return 0;
}