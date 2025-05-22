#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    int vetor[10];
    vetor[0] = 1;
    vetor[1] = 23;
    vetor[2] = 12;
    vetor[3] = 11;
    vetor[4] = 76;
    vetor[5] = 43;
    vetor[6] = 22;
    vetor[7] = 63;
    vetor[8] = 90;
    vetor[9] = 4;
    int contador = 0;
    for(int i = 0; i<=9; i++){
        if(vetor[i] % 2 == 0){
            printf("%d é o %dº numero par.\n", vetor[i],contador+1);
            contador = contador + 1;
        }
    }
    printf("No total temos %d números pares.", contador);
    return 0;
}