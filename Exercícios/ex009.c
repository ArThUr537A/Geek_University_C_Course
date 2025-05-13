//Faça um programa que leia 10 números e escreva o maior e o menor valor lido


#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    int num;
    int maior, menor;

    for(int i = 1; i <= 10; i++){
        printf("Digite um número: ");
        scanf("%d", &num);
    if(i == 1){
        maior = menor = num;
    }else{
        if(num > maior){
            maior = num;
        }
        if(num < menor){
            menor = num;
        }
    }

        
    }
    printf("O maior é %d\n" , maior);
    printf("O menor é %d", menor);

    return 0;
}