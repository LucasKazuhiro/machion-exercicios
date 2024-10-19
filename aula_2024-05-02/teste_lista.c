#include "lista.h"

int main(){
    printf("\n\n\n\n\n");

    t_lista lista;

    // Lista vazia
    inicializa_lista(&lista);
    printf(">> Imprimindo a lista:\n");
    mostra_lista(lista);

    // Inserindo items no inicio da lista
    printf("\n\n\n>> Inserindo valores no começo e imprimindo a lista:\n");
    for(int i=15; i<=25; i+=5){
        insere_inicio(i, &lista);
        mostra_lista(lista);
    }

    // Remove valores do inico lista
    printf("\n\n\n>> Removendo valores e imprimindo a lista:\n");
    while(!esta_vazia(&lista)){
        printf("%d foi removido do inicio\n", remove_inicio(&lista));
        printf("A lista ficou assim:\n");
        mostra_lista(lista);
        printf("\n");
    }

    // Inserindo items no fim da lista;
    printf("\n\n\n>> Inserindo valor no final e imprimindo a lista:\n");
    for(int i=10; i<=30; i+=10){
        printf("Inserindo o %d no fim da lista\n", i);
        insere_fim(i, &lista);
        mostra_lista(lista);
        printf("\n");
    }

    printf("\n\n\n\n\n");
    return 0;
}

