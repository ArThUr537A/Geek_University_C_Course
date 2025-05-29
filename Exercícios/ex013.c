#include <stdio.h>
#include <locale.h>

int FuncaoMaiorValor(int Vetor_De_Inteiros[10]){
    int maior;
    for(int i = 0; i<10; i++){
        if(i == 0){
            maior = Vetor_De_Inteiros[i];
        }else{
            if(Vetor_De_Inteiros[i] > maior){
               maior = Vetor_De_Inteiros[i];
            }
        }
    }
    printf("O maior valor do vetor é %d\n", maior);
}

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
    int Vetor[10] = {3, 4, 6, 7, 8, 0, 10, 3, 2, 11};
    int Vetor_a[10] = {2, 4, 6, 7, 8, 0, 1, 2, 4, 0};
    FuncaoMaiorValor(Vetor);
    FuncaoMaiorValor(Vetor_a);

}