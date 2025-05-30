/*
Faça um programa que tenha uma função que, dado um caractere qualquer de entrada, retorne o mesmo 
caractere sempre em maiúsculo. 
*/

//Cria a função que resolve o problema
#include <stdio.h>
#include <locale.h>

void CaractereMaiusculo(char CaraterDoUsuario){
    char caractere = CaraterDoUsuario - 32;
    printf("%c", caractere);
}

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
    //Declara o caractere
    char CaraterDoUsuario;

    //Solicita o caractere para o usuário
    printf("Digite um caractere: ");
    scanf("%c", &CaraterDoUsuario);

    //Aplica a função ao caracter escolhido 
    CaractereMaiusculo(CaraterDoUsuario);

    return 0;
}