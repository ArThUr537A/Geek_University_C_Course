//Três amigos jogaram na loteria. Caso eles ganhem, o pêmio deve ser repartido proporcionalmente 
//ao valor que cada um deu para a realização da aposta. Faça um programa que leia quanto cada 
//apostador apostou, o valor do prêmio e imprima quanto cada um ganharia do prêmio com base no valor
//investido.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil"); // Troca '.' por ',' e arruma os caracteres
    
    //Declara as variáveis
    float p1, p2, p3, soma, premio=1000;
    
    //Imprime e solicia as apostas
    printf("Aposta do 1º jogador: ");
    scanf("%f", &p1);
    printf("Aposta do 2º jogador: ");
    scanf("%f", &p2);
    printf("Aposta do 3º jogador: ");
    scanf("%f", &p3);

    //Faz os cálculos e distribui cada valor respectivamente
    soma = p1 + p2 + p3;
    float premio1=(p1/soma)*premio, premio2=(p2/soma)*premio, premio3=(p3/soma)*premio;

    //Imprime os premios de cada jogador
    printf("1º jogador recebeu %.2f$, 2º jogador recebeu %.2f$, 3º jogador recebeu %.2f$", premio1, premio2, premio3);
    
    return 0;
}
