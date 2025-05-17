//Tipos de dados

//Boleanos (Verdadeiro/Falso) true/false

/*
Na linguagem C, não existe um tipo de dado boolean

mas...

A linguagem C, reconhece o valor 0 como Falso (false)
e Qualquer valor diferente de 0 como verdadeiro (true)
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    int booleano = 2;

    if(booleano){
        printf("Verdadeiro");
    }else{
        printf("Falso");
    }

    return 0;
}