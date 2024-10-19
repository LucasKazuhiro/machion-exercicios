#include "pilha.h"


void constroi_pilha(t_pilha *p, int capacidade){
    p->dados = (int *) malloc (capacidade * sizeof(int));
    p->topo = 0;
    p->capacidade = capacidade;
}

int esta_vazia (const t_pilha * p){
    return p->topo == 0;
}

int esta_cheia (const t_pilha * p){
    return p->topo == p->capacidade;
}

int tamanho (const t_pilha * p){
    return p->topo;
}

void empilha (t_pilha * p, int i){
    p->dados[p->topo++] = i;
}

int desempilha (t_pilha * p){
    return p->dados[--p->topo];
}

void mostra_pilha (t_pilha * p){
    if(esta_vazia(p)){
        printf ("pilha vazia\n");
    }
    else{
        for(int i=p->topo-1; i>=0; i--){
            printf("%d\n", p->dados[i]);
        }
    }
}