#include "pilha_lista.h"


int main(){
    printf("\n\n\n\n\n");

    t_pilha pilhaUm, pilhaDois;
    inicializa_pilha(&pilhaUm);
    inicializa_pilha(&pilhaDois);
    

    empilha(1, &pilhaUm);
    empilha(2, &pilhaUm);
    empilha(3, &pilhaUm);

    empilha(1, &pilhaDois);
    empilha(2, &pilhaDois);
    empilha(2, &pilhaDois);



    if(sao_iguais(pilhaUm, pilhaDois)){
        printf("As duas pilhas sao iguais!!\n");
    }
    else{
        printf("As pilhas sao diferentes!!\n");
    }

    printf("\n\nValores da PilhaUm: \n");
    mostra_pilha(pilhaUm);

    printf("\n\n");
    
    printf("Valores da PilhaDois:\n");
    mostra_pilha(pilhaDois);
    
    
    
    printf("\n\n\n\n\n");



    printf("Copiando valores de uma pilha para outra\n");
    t_pilha pilhaTres;
    inicializa_pilha(&pilhaTres);

    copiar_pilha(&pilhaTres, pilhaDois);

    printf("\n\nValores da PilhaDois:\n");
    mostra_pilha(pilhaDois);
    
    printf("\n\n");
    
    printf("Valores da PilhaTres: \n");
    mostra_pilha(pilhaTres);





    printf("\n\n\n\n\n");
    return 0;
}