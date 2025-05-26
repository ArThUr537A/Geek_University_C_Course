//Escrevendo funções
//main -> principal

//Estrutura das funções
/*
- Tipo de retorno
- nome
- parâmetros de entrada (opcional)
- retorno (opcional)
*/

#include <stdio.h>
#include <locale.h>

void mensagem(){
    printf("Bem-vindo!");
}

int soma(int num1, int num2){
    int res = num1 +num2;
    return res;
}

void retorna_char(char caractere){
    printf("%c", caractere + 1);

}

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Olá...");  
    
    return 0;
}