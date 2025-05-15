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

*/
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    char opcao;

    printf("Informe uma opção: \n");
    printf("a - Saldo da conta. \n");
    printf("b - Extrato da conte. \n");
    printf("c - Limite da conta. \n");
    scanf("%c", &opcao);

    //Characteres  devem ser colocados entre aspas simples.
    if(opcao == 'a'){
        printf("Seu saldo é ...\n");
    }else if(opcao == 'b'){
        printf("Extrato da conta ...\n");
    }else if(opcao == 'c'){
        printf("Seu limite é ...\n");
    }else{
        printf("Opção Desconhecida ...\n");
    }
    //Gerar um alfabeto completo com um loop
    for(int i = 97; i <= 122; i++){
        printf("%c\n", i);
    }
    return 0;
}
