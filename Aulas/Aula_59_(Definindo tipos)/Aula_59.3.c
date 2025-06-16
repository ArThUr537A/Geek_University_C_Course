//Struct -> estrutura


#include <stdio.h>
//#include <locale.h>
#include <string.h>

struct st_contato{
    char nome[100];
    int ano_nascimento;
    char telefone[20];
    char email[100];
};

struct st_agenda{
    struct st_contato contatos[100]
}agenda;

int main(){
    //setlocale(LC_ALL,"Portuguese_Brazil");

    for(int i = 0; i<3; i++){

    printf("Informe o nome: ");
    fgets(agenda.contatos[i].nome, 100, stdin);

    printf("Informe o ano de nascimento : ");
    scanf("%d", &agenda.contatos[i].ano_nascimento);
    getchar();

    printf("Informe o telefone: ");
    fgets(agenda.contatos[i].telefone, 20, stdin);

    printf("Informe o email: ");
    fgets(agenda.contatos[i].email, 100, stdin);

    }
    printf("===============Agenda de contato ===============\n");
    for(int i = 0; i < 3; i++){
        printf("====================Contato %d======================\n", (i+1));
        printf("Nome: %s\n", strtok(agenda.contatos[i].nome, "\n")); //strtook remove \n do fgets()
        printf("Telefone: %s\n", strtok(agenda.contatos[i].telefone, "\n")); 
        printf("Email: %s\n", strtok(agenda.contatos[i].email, "\n"));
        printf("Ano de nascimento: %d\n", agenda.contatos[i].ano_nascimento);
    }
   

    return 0;
}