//Opera��es matem�ticas

/*
Somar +
Subtrair -
Multiplicar *
Dividir /
Elevar ao quadrado x**2
resto da divis�o %
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
    printf("A soma � %d\n", (int)res); //cast

    //subtrair
    res = num1 - num2;
    printf("A subtra��o � %d\n", (int)res); //cast

    //multiplicar
    res = num1 * num2;
    printf("A multiplica��o � %d\n", (int)res); //cast

    //divis�o
    res = (float)num1 / (float)num2; //cast
    printf("A divis�o � %f\n", res);

    //elevando ao quadrado
    res = num1 * num1;
    printf("O quadrado de num 1 � %d\n", (int)res); //cast

    //modulo (verificando se o num1 � par ou �mpar)
    if(num1 % 2 == 0){
        printf("%d � par", num1);
    }else{
        printf("%d � impar", num1);
    }

    return 0;
}