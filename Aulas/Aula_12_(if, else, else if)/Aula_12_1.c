//Estruturas de decis�o if, else, else if
//                      se, ent�o, ent�o se

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    //Declara��o de vari�veis
    int idade;

    //Entrada
    printf("Qual � a sua idade? ");
    scanf("%d",  &idade);

    //Procesamento
    if(idade < 18){
        printf("Voc� � menor de idade. \n");
    }else if(idade >= 18 && idade < 60){
        printf("Voc� � adulto. \n");
    }else{
        printf("Voc� � idoso. \n");
    }

    //Sa�da
    printf("Sua idade � %d\n", idade);

    return 0;
}