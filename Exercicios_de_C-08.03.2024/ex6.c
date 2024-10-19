#include <stdio.h>

int main(){

    char nome[50];
    int sexo, idade;

    printf("Informe o nome: ");
    scanf("%49[^\n]s", nome);
    printf("Informe o sexo (1 - Masculino, 2 - Feminino): ");
    scanf("%d", &sexo);
    printf("Informe a idade: ");
    scanf("%d", &idade);


    printf("\n\n");

    if(sexo == 2 && idade < 25){
        printf("Nome: %s\n", nome);
        printf("ACEITA!!");
    }
    else{
        printf("NAO ACEITO(A)");
    }


    return 0;
}