#include "pilha.h"

void inicializa_pilha(t_pilha * p){
    p->tamanho = 0;
    p->topo = NULL;
}

int esta_vazia(t_pilha * p){
    return p->topo == NULL;
}

void empilha(int i, t_pilha * p){
    t_no * novo = constroi_no(i);

    if(!esta_vazia(p)){
        novo->proximo = p->topo;
    }

    p->topo = novo;
    p->tamanho++;
}

int desempilha(t_pilha * p){
    int temp = p->topo->info;

    t_no * lixo = p->topo;
    p->topo = p->topo->proximo;
    p->tamanho--;
    free(lixo);
   
    return temp;
}

void mostra_pilha(t_pilha p){
    if(esta_vazia(&p)){
        printf("A pilha estah vazia\n");
    }
    else{
        t_no * aux = p.topo;
        while(aux != NULL){
            printf("| %d |\n", aux->info);
            aux = aux->proximo;
        }
        printf("  //\n");
    }
}

// https://www.facom.ufu.br/~backes/wordpress/ListaED04-Listas.pdf
// 13 16 21 24


// https://www.facom.ufu.br/~backes/wordpress/ListaED06-Pilhas.pdf
// 2 Com pilha usando vetor, e 2 com pilnha usando lista ligada.
// 5 8 13 14


