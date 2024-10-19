#include <stdio.h>

void qtdExclamacao(int qtd){
    int limite=1;

    while(limite != qtd){
        for(int i=0; i != limite; i++){
            printf("!");
        }
        printf("\n");

        limite++;
    }   
}


int main(){

    int qtd;
    printf("Informe a quantidade de '!': ");
    scanf("%d", &qtd);

    qtdExclamacao(qtd);

    return 0;
}