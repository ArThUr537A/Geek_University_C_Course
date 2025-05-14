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

    double media, nota1, nota2;

    printf("Qual a primeira nota? ");
    scanf("%lf", &nota1);

    printf("Qual a segunda nota? ");
    scanf("%lf", &nota2);

    media = (nota1 + nota2)/2;

    printf("Sua média é %lf", media);

    return 0;
}