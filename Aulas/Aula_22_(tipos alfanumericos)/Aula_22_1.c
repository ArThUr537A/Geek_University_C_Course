/*
Tipos de Dados

Tipos Alfanum�ricos
- Characteres;
- String*;

* Na linguagem C, n�o existe o tipo de dado String.

Ex: String
"adasdsaihduasdhasiudhasuidasuhduias"

Ex: Caractere
's';

"paulo\0";
*/
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    //declara��o de uma string em C
    char nome[50]; // at� 49 characteres

    printf("Qual � seu nome? ");
    gets(nome);

    printf("Seu nome � %s", nome);
}
