// FILE == arquivo


#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
    FILE *arq;

    //fopen(nome-do-arquivo, forma-de-abertura-do-arquivo)
    //w - abrir o arquivo para escrita (se o arquivo j� existir, sera sobrescrito com um novo zerado)
    //r - abrir o arquivo para leitura (n�o podemos escrever no arquivo)
    //wa - abrir o arquivo para adi��o de conte�do (se o arquivo j� existir, o conte�do sera adicionado nas linhas abaixo)

    arq = fopen("arquivo.txt", "w");

    //sempre que a gente finalizar a manipula��o de um arquivo, devemos fecha-lo
    fclose(arq);

    
    return 0;
}