//Operações matemáticas

/*
Somar +
Subtrair -
Multiplicar *
Dividir /
Elevar ao quadrado x**2
resto da divisão %
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int num1, num2;
    float res;

    printf("Informe o num1: ");
    scanf("%d", &num1);

    printf("Informe o num2: ");
    scanf("%d", &num2);

    //soma +
    res = num1 + num2;
    printf("A soma é %d\n", (int)res); //cast

    //subtrair
    res = num1 - num2;
    printf("A subtração é %d\n", (int)res); //cast

    //multiplicar
    res = num1 * num2;
    printf("A multiplicação é %d\n", (int)res); //cast

    //divisão
    res = (float)num1 / (float)num2; //cast
    printf("A divisão é %f\n", res);

    //elevando ao quadrado
    res = num1 * num1;
    printf("O quadrado de num 1 é %d\n", (int)res); //cast

    //modulo (verificando se o num1 é par ou ímpar)
    if(num1 % 2 == 0){
        printf("%d é par", num1);
    }else{
        printf("%d é impar", num1);
    }

    return 0;
}