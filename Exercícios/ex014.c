/*
Fa�a um programa que tenha uma fun��o que, dado um caractere qualquer de entrada, retorne o mesmo 
caractere sempre em mai�sculo. 
*/

//Cria a fun��o que resolve o problema
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

    //Solicita o caractere para o usu�rio
    printf("Digite um caractere: ");
    scanf("%c", &CaraterDoUsuario);

    //Aplica a fun��o ao caracter escolhido 
    CaractereMaiusculo(CaraterDoUsuario);

    return 0;
}