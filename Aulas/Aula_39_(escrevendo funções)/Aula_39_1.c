//aula 03 usando funções

//main -> principal

#include <stdio.h>
#include <locale.h>

void mensagem(){
    printf("Bem-vindo!\n");
}

int soma(int num1, int num2){
    int res = num1 +num2;
    return res;
}

void proximo_char(char caractere){
    printf("%c", caractere + 1);

}

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Olá...\n");
    mensagem();
    //int retorno = soma(4, 6);
    printf("Retorno = %d\n", soma(4, 6));

    char cara = 'a';
    proximo_char(cara);
    return 0;
}