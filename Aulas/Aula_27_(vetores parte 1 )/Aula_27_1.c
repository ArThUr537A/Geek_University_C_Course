//vetores - parte 1
//array uni-dimensional
//char nome[50];

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    //vetores e strings
    char nome[50];
    // "dasdasdfasf"
    printf("Qual seu nome? ");
    gets(nome);
    printf("Olá %s\n", nome);

    //vetores e caracteres
    char letras[26];
    //'a'
    int contador = 0;
    for(int i = 97; i<= 122; i++){
        letras[contador] = i;
        contador = contador + 1;
    }
    //Imprimindo as letras e seus valores em decimal
    for(int j = 0; j < 26; j++){
        printf("%d == %c\n", letras[j], letras[j]);
    }
    

    //vetores de inteiros
    //int numeros[10];

    //vetores reais
    //float valores[5];

    return 0;
}