#include <stdio.h>
#include <locale.h>

//Enum -> Enumera��o
enum dias_da_semana{
    segunda,
    terca,
    quarta,
    quinta,
    sexta,
    sabado,
    domigo,
};



int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
    enum dias_da_semana d1, d2;

    d1  =  quinta;

    d2  =  3;

    if(d1 == d2){
       printf("Os dias s�o iguais...");
    }else{
       printf("Os dias n�o s�o iguais");
    }

    return 0;
}