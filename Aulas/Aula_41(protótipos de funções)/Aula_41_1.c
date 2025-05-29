#include <stdio.h>
#include <locale.h>

//Protótipo de função
/*
Assinatura das funções
- Tipo de retorno
- Nome
- Parâmetros de entrada (opcionais)
*/
int soma(int num1, int num2);
void mensagem();


int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
    
    int n1, n2, ret;

    printf("Informe o primeiro número: ");
    scanf("%d", &n1);

    printf("Informe o segundo número: ");
    scanf("%d", &n2);

    ret = soma(n1, n2);
    
    printf("A soma de %d com %d é %d\n", n1, n2, ret);
    mensagem();

    return 0;
}

//Implementação
int soma(int num1, int num2){
    return num1 + num2;
}

void mensagem(){
    printf("Bem Vindo!...");
}
