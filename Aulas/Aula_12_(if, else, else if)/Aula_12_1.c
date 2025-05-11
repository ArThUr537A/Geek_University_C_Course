//Estruturas de decisão if, else, else if
//                      se, então, então se

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    //Declaração de variáveis
    int idade;

    //Entrada
    printf("Qual é a sua idade? ");
    scanf("%d",  &idade);

    //Procesamento
    if(idade < 18){
        printf("Você é menor de idade. \n");
    }else if(idade >= 18 && idade < 60){
        printf("Você é adulto. \n");
    }else{
        printf("Você é idoso. \n");
    }

    //Saída
    printf("Sua idade é %d\n", idade);

    return 0;
}