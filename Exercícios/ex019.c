#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    FILE *document_write;
    FILE *document_read;
    char caractere[10];
    char caractere_lido;

    document_write = fopen("arq.txt", "w");
    document_read = fopen("arq.txt", "r");

    if(document_write){
        printf("Informe um caractere: ");
        fgets(caractere, 10, stdin);
        while(caractere[0] != '0'){
            fputs(caractere, document_write);
            printf("Informe um caractere: ");
            fgets(caractere, 10, stdin);
        }
    }else{
        printf("Não foi possível escrever no arquivo!");
    }
    fclose(document_write);
    document_read = fopen("arq.txt", "r");

    if(document_read){
        while((caractere_lido = getc(document_read)) !=EOF){
            printf("%c", caractere_lido);
        }
    }else{
        printf("Não foi possível ler o arquivo!");
    }
    fclose(document_read);
    return 0;
}