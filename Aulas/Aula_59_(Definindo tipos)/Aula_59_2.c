//Struct -> estrutura


#include <stdio.h>
//#include <locale.h>
#include <string.h>

struct st_aluno{
    char matricula[10];
    char nome[100];
    char curso[50];
    int ano_nascimento;
}alunos[5];

int main(){
    //setlocale(LC_ALL,"Portuguese_Brazil");

    for(int i = 0; i<5; i++){
    printf("Informe a matricula do aluno: ");
    fgets(alunos[i].matricula, 10, stdin);

    printf("Informe o nome do aluno: ");
    fgets(alunos[i].nome, 100, stdin);
    
    printf("Informe o curso do aluno: ");
    fgets(alunos[i].curso, 50, stdin);

    printf("Informe o ano de nascimento do aluno: ");
    scanf("%d", &alunos[i].ano_nascimento);
    getchar();

    }

    for(int i = 0; i < 5; i++){
        printf("===============DADOS DO ALUNO %d===============\n", (i+1));
        printf("Matricula: %s\n", alunos[i].matricula);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Curso: %s\n", alunos[i].curso);
        printf("Ano de nascimento: %d\n", alunos[i].ano_nascimento);
    }
   

    return 0;
}