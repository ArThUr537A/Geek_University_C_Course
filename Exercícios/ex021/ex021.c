/*Fa�a um programa que receba do usu�rio o nome de um arquivo texto e um caractere. Mostre na tela 
quantas vezes aquele caractere aparece dentro do arquivo.
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    //declara o documento e as vari�veis.
    FILE* document_read;
    char document_name[10];
    char caractere;
    char caractere_lido;
    int contador = 0;

    //solicita o nome do documento e o caractere.
    printf("Digite o nome do documento: ");
    gets(document_name);
    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    //abre o arquivo para leitura.
    document_read = fopen(document_name, "r");

    //verifica se o arquivo pode ser lido.
    if(document_read){
        //l� os caracteres e faz a contagem
        while((caractere_lido = getc(document_read)) != EOF){
            if(caractere_lido == caractere){
                contador++;
            }
        }  
    }else{
        printf("N�o foi poss�vel abrir o arquivo.");
    }
    //imprime o resultado na tela
    printf("O arquivo possui %d caracteres que s�o iguais ao caractere: %c", contador, caractere);
    fclose(document_read);
    return 0;
}
