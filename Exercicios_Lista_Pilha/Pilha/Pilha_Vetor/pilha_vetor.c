#include "pilha_vetor.h"


void constroi_pilha(t_pilha *p, int capacidade){
    p->dados = (char *) malloc (capacidade);
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

void empilha (t_pilha * p, char i){
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



// Lista de Exercicios: https://www.facom.ufu.br/~backes/wordpress/ListaED06-Pilhas.pdf

// Exercicio 5
int analisar_stringXY(t_pilha p, int lim){
    int eh_stringXY = 1;
    int j=lim-1;

    for(int i=0; i<lim/2 && eh_stringXY; i++){
        if(p.dados[i] != p.dados[j]){
            eh_stringXY = 0;
        }
        j--;
    }

    return eh_stringXY;
}



// Exercicio 8
int analisar_parentesis(t_pilha p, int lim){
    int esta_balanceado = 1;
    int verif_parent = 0;

    for(int i=0; i<lim && esta_balanceado; i++){
        if(p.dados[i] == '('){
            verif_parent++;
        }
        else if(p.dados[i] == ')'){
            verif_parent--;
        }

        if(verif_parent < 0){
            esta_balanceado = 0;
        }
    }

    if(verif_parent > 0){
        esta_balanceado = 0;
    }

    return esta_balanceado;
}