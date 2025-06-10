#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    FILE *arq;
    char c;

    arq = fopen("arquivo.txt", "r"); //leitura

    if(arq){
        while((c = getc(arq)) !=EOF){ //End Of File // Fim do arquivo
            printf("%c", c);
        }
    }else{
        printf("Não achei o arquivo");
    }

    fclose(arq);
    return 0;
}