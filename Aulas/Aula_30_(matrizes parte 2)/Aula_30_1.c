//Matrizes parte 2

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    //vetores de inteiros
    /*
    [00][11]
    [10][11]
    */
    int numeros[2][2];
    numeros[0][0] = 1;
    numeros[0][1] = 2;
    numeros[1][0] = 3;
    numeros[1][1] = 4;

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("numeros[%d][%d] vale %d\n", i, j, numeros[i][j]);
        }

    }
    //vetores reais
    float valores[2][2];
    int contador = 1;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            valores[i][j] = (float)contador;
            contador = 1 + contador;
            printf("numeros[%d][%d] vale %1.f\n", i, j, valores[i][j]);
           
        }
    }

    return 0;
}