// Fa�a um programa que leia tr�s valores e 
// apresente como resultado a soma dos quadrados 
// dos valores lidos
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    //Declara as vari�veis
    int n1, n2, n3, soma_q=0;
    
    //Imprime a mensagem e solicita os valores
    printf("1� valor: ");
    scanf("%d", &n1);
    printf("2� valor: ");
    scanf("%d", &n2);
    printf("3� valor: ");
    scanf("%d", &n3);

    //Realiza a opera��o
    soma_q=n1*n1+n2*n2+n3*n3; 
    
    //Imprime o resultado
    printf("A soma do quadrado dos valores � %d", soma_q);



}
