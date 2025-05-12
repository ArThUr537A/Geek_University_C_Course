/*Usamos o switch em casos onde tenhamos uma
estrutura grande ou confusa de if/else/else if

#Pseudoc�digo:

Escolha(vari�vel)
Inicio
    Caso valor1:
        Instru��es
    Caso valor2:
        Instru��es
    Caso valor3:
        Instru��es
    ...
    Caso valorN:
        Instru��es
Fim

Na linguagem C

switch(variavel){
    Caso valor1:
        instru��es
        break
    Caso valor2:
        intru��es
        break
    default
        intru��es
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
            printf("Ter�a\n");
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
            printf("S�bado\n");
            break;
        default:
            printf("Valor inv�lido");
    }
}