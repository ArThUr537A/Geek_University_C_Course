#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//atof()

int main(){
    char valor_s[500];
    double valor_li;

    strcpy(valor_s, "4324234234234235676"); // "4.a"

    valor_li = atol(valor_s);

    printf("O valor é %lf", valor_li);

   return 0;
}