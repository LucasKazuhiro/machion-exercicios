#include "pilha_lista.h"

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
        printf(" //\n");
    }
}




// https://www.facom.ufu.br/~backes/wordpress/ListaED06-Pilhas.pdf

// Exercicio 13
int sao_iguais(t_pilha pilhaUm, t_pilha pilhaDois){
    int sao_iguais = 1;
    t_no * no_pilhaUm = pilhaUm.topo;
    t_no * no_pilhaDois = pilhaDois.topo;

    if(pilhaUm.tamanho != pilhaDois.tamanho){
        sao_iguais = 0;
    }
    else if(no_pilhaUm == NULL && no_pilhaDois == NULL){
        sao_iguais = 1;
    }
    else{
        for(int i=0; i<pilhaUm.tamanho && sao_iguais; i++){
            if(no_pilhaUm->info != no_pilhaDois->info){
                sao_iguais = 0;
            }
            no_pilhaUm = no_pilhaUm->proximo;
            no_pilhaDois = no_pilhaDois->proximo;
        }
    }

    return sao_iguais;
}



// Exercicio 14
void copiar_pilha(t_pilha * destino, t_pilha origem){
    int valores[origem.tamanho];
    t_no * no_atual = origem.topo;

    for(int i=0; i<origem.tamanho; i++){
        valores[i] = no_atual->info;
        no_atual = no_atual->proximo;
    }

    for(int i=origem.tamanho-1; i>=0; i--){
        empilha(valores[i], destino);
    }
}