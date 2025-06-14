/*2. Faça um programa que receba do usuário 
o nome de um arquivo texto e mostre na tela quantas linhas 
este arquivo possui.*/
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    FILE* document_read;
    char document_name[10];
    int contador = 0;
    char caractere_lido;

    printf("Digite o nome do arquivo: ");
    gets(document_name);

    document_read = fopen(document_name, "r");
    if(document_read){
        while((caractere_lido = getc(document_read)) != EOF){
            if(caractere_lido == '\n'){
                contador++;
            }

        }
        
    }else{
        printf("Não consegui ler o documento.");
    }
    
    printf("O arquivo possui %d linhas.", contador+1);
    fclose(document_read);
    return 0;
}