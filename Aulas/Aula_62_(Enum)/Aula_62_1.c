#include <stdio.h>
#include <locale.h>

//Enum -> Enumeração
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
       printf("Os dias são iguais...");
    }else{
       printf("Os dias não são iguais");
    }

    return 0;
}