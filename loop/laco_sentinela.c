#include <stdio.h>

int main(){

    int valorUsuario, soma = 0;

    printf("\n\n");

    printf("Digite '0' para sair do Loop\n\n");

    while(valorUsuario){
        printf("Insira um valor: ");
        scanf("%d", &valorUsuario);

        soma += valorUsuario;
    }

    printf("\nO valor da soma eh %d", soma);


    return 0;
}