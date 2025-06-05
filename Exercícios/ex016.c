/*Faça um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real e char. 
Associe as variáveis aos ponteiros (use &). 
Imprima os valores das variáveis antes e após a associação.*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    int inteiro = 1;
    float real = 3.23324;
    char caractere = 100;

    printf("Antes da associação de valores via ponteiro:\n");
    printf("inteiro = %d\n", inteiro);
    printf("real = %f\n", real);
    printf("caractere = %c\n", caractere);
    
    int* ponteiro_inteiro = &inteiro;
    float* ponteiro_real = &real;
    char* ponteiro_caractere = &caractere;

    printf("Depois da associação de valores via ponteiro:\n");
    printf("inteiro = %d\n", inteiro);
    printf("real = %f\n", real);
    printf("caractere = %c\n", caractere);

    







    return 0;
}