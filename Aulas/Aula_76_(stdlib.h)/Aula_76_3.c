#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//atof()

int main(){
    char valor_s[5];
    double valor_i;

    strcpy(valor_s, "4"); // "4.a"

    valor_i = atoi(valor_s);

    printf("O valor é %d", valor_i);

   return 0;
}