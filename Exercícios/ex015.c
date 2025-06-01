#include <stdio.h>
#include <locale.h>

int RetornaExclamacao(int numero){
    for(int i=0; i<numero; i++){
        int j=0;
        while(j <= i){
            printf("!");
            j = j + 1;
        }
        printf("\n");
    
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    int valor = 10;
    RetornaExclamacao(valor);

}