#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    FILE *arq;
    char nome[100], *resultado;

    arq = fopen("arquivo2.txt", "r");
    if(arq){        
        while(!feof(arq)){// File End Of File
            resultado = fgets(nome, 100, arq);
            printf("Resultado: %d\n", resultado);
            if(resultado){
               printf("%s\n", nome); 
            }
        };
    }else{
        printf("Não achei o arquivo");
    }
    
    fclose(arq);
    return 0;
}