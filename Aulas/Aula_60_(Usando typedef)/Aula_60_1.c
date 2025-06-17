#include <stdio.h>
#include <locale.h>

//typedef  -- redefinindo tipos

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    typedef float nota;

    //declarando variáveis
    nota prova1 = 7.0;
    nota prova2 = 6.0;

    nota soma = prova1 + prova2;

    printf("A soma das notas é %.2f", soma);
 
    return 0;
}