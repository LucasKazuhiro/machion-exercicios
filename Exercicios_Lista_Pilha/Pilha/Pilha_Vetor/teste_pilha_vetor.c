#include "pilha_vetor.h"

int main(){
    printf("\n\n\n\n\n");

    int lim=0, tam=0;
    t_pilha pilha;
    char c;

    printf("Digite o tamanho da pilha: ");
    scanf("%d", &tam);
    constroi_pilha(&pilha, tam);

    c=getchar();
    printf("Digite a string: ");
    while((c=getchar()) != '\n' && lim != tam && c != EOF){
        if(c != ' '){
            empilha(&pilha, c);
            lim++;
        }
    }

    printf("\n\n");



    // // Teste do Exercicio 5
    // if(analisar_stringXY(pilha, lim)){
    //     printf("Eh uma string XY!!");
    // }
    // else{
    //     printf("Num eh string XY!!");
    // }



    // Teste do Exercicio 8
    if(analisar_parentesis(pilha, lim)){
        printf("Os parentesis estao corretos!!");
    }
    else{
        printf("Os paresenteis nao estao corretos, parece que alguns estao faltando!!");
    }



    printf("\n\n\n\n\n");
    return 0;
}