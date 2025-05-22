#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
    int A[7];
    A[0] = 1;
    A[1] = 0;
    A[2] = -2;
    A[3] = -5;
    A[4] = 7;
    printf("%d", A[2]);



    return 0;
}