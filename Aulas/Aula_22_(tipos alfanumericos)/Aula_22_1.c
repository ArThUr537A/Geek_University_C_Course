/*
Tipos de Dados

Tipos Alfanuméricos
- Characteres;
- String*;

* Na linguagem C, não existe o tipo de dado String.

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
    
    //declaração de uma string em C
    char nome[50]; // até 49 characteres

    printf("Qual é seu nome? ");
    gets(nome);

    printf("Seu nome é %s", nome);
}
