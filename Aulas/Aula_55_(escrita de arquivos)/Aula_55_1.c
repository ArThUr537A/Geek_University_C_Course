#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
    FILE *arq;
    char fruta[10];

    arq = fopen("frutas2.txt", "a"); //write -> escrita
    if(arq){
        printf("Informe uma fruta ou 0 para sair\n");
        fgets(fruta, 10, stdin); //stdin -> standart input -> entrada padrão
        while(fruta[0] != '0'){
            fputs(fruta, arq);
            printf("Informe uma fruta ou 0 para sair\n");
            fgets(fruta, 10, stdin);
        }
    }else{
        printf("Não foi possivel criar o arquivo.");
    }
    fclose(arq);
    return 0;
}