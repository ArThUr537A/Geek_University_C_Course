/*Usamos o switch em casos onde tenhamos uma
estrutura grande ou confusa de if/else/else if

#Pseudocódigo:

Escolha(variável)
Inicio
    Caso valor1:
        Instruções
    Caso valor2:
        Instruções
    Caso valor3:
        Instruções
    ...
    Caso valorN:
        Instruções
Fim

Na linguagem C

switch(variavel){
    Caso valor1:
        instruções
        break
    Caso valor2:
        intruções
        break
    default
        intruções
}


 */

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");

    int valor;

    printf("Digite um valor de 1 a 7: ");
    scanf("%d", &valor);

    switch(valor){
        case 1:
            printf("Domigo\n");
            break;
        case 2:
            printf("Segunda\n");
            break;
        case 3:
            printf("Terça\n");
            break;
        case 4:
            printf("Quarta\n");
            break;
        case 5:
            printf("Quinta\n");
            break;
        case 6:
            printf("Sexta\n");
            break;
        case 7:
            printf("Sábado\n");
            break;
        default:
            printf("Valor inválido");
    }
}