#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    /*
    *  0   1   2   3   4
    *-------------------
    *|   |   |   |   |   |
    *-------------------
    * int = 4 bytes
    * bit 0 ou 1
    * byte 0000 0001
    * 0000 0000 0000 0000 0000 0000 0000 0000 0000 0001
    * 0000 0000 0000 0000 0000 0000 0000 0000 0000 0010
    */
    
    int valores[5] = {1, 2, 3, 4, 5};

    for(int i=0; i<5; i++){
        printf("O valor %d tem %ld bytes\n", valores[i], sizeof(valores[i]));
    }
    printf("O array valores possue %ld bytes\n", sizeof(valores));

    printf("valores[0] vale %d e o endere�o de mem�ria � %p\n", valores[0], valores[0]);

    printf("*(valores) vale %d e endere�o de mem�ria � %p\n", *(valores), *(valores));

    printf("*(valores+1) vale %d e endere�o de mem�ria � %p\n", *(valores+1), *(valores+1));
    printf("*(valores+2) vale %d e endere�o de mem�ria � %p\n", *(valores+2), *(valores+2));
    printf("*(valores+3) vale %d e endere�o de mem�ria � %p\n", *(valores+3), *(valores+3));
    printf("*(valores+4) vale %d e endere�o de mem�ria � %p\n", *(valores+4), *(valores+4));
    return 0;
}