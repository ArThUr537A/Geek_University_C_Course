#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_brazil");

    FILE *arq;
    int num, resultado, soma=0;
    arq = fopen("arquivo3.txt", "r");
    
    if(arq){
        while(!feof(arq)){
            resultado=fscanf(arq, "%d", &num);
            //printf("Resultados: %d\n", resultado);
            if(resultado==1){
              soma = soma + num;  
            }
        }
    }else{
        printf("N�o achei o arquivo");
    }
    printf("A soma dos n�meros encontrados � %d", soma);
    fclose(arq);
    return 0;
}