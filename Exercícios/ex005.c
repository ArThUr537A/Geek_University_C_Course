//Leia quatro notas, calcule a média aritmética e imprima o resultado
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil"); // Troca '.' por ',' e arruma os caracteres
    
    //Declara as variáveis do tipo float
    float n1, n2, n3, n4, media;
    
    //Imprime a mensagem e solicita os valores
    printf("Nota 1: ");
    scanf("%f", &n1);
    printf("Nota 2: ");
    scanf("%f", &n2);
    printf("Nota 3: ");
    scanf("%f", &n3);
    printf("Nota 4: ");
    scanf("%f", &n4);

    //Realiza o calculo da média
    media=(n1+n2+n3+n4)/4;

    //Imprime o resultado
    printf("A média foi %.2f", media);
    
    return 0;
}
