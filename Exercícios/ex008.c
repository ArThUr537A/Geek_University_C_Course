/*Escreva um programa que declare um inteiro, inicialize-o com 0, incremete-o de 100
em 100, imprimindo seu valor na tela, até que seja 100000 (cem mil).
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
     
    int inteiro = 0;

    while(inteiro != 100000){
        printf("%d\n", inteiro);
        inteiro = inteiro + 100;
    }
    return 0;
}