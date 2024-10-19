#include "lista.h"

void inicializa_lista(t_lista * l){
    l->tamanho = 0;
    l->primeiro = NULL;
}

int esta_vazia(t_lista * l){
    return l->primeiro == NULL;
}

void insere_inicio(int i, t_lista *l){
    t_no * novo = constroi_no(i);

    if(!esta_vazia(l)){
        novo->proximo = l->primeiro;
    }

    l->primeiro = novo;
    l->tamanho++;
}

int remove_inicio(t_lista * l){
    int temp = l->primeiro->info;

    t_no * lixo = l->primeiro;
    l->primeiro = l->primeiro->proximo;
    l->tamanho--;
    free(lixo);
   
    return temp;
}

void mostra_lista(t_lista l){
    if(esta_vazia(&l)){
        printf("A lista estah vazia\n");
    }
    else{
        t_no * aux = l.primeiro;
        while(aux != NULL){
            printf("| %d | -> ", aux->info);
            aux = aux->proximo;
        }
        printf(" //\n");
    }
}
    
void insere_fim(int i, t_lista * l){
    t_no * novo = constroi_no(i);
    if(esta_vazia(l)){
        l->primeiro = novo;
    }
    else{
        t_no * aux = l->primeiro;
        while(aux->proximo != NULL){
            aux = aux->proximo;
        }
        aux->proximo = novo;
    }
    l->tamanho++;
}

int remove_fim(t_lista * l){
    int temp;
    t_no * lixo;

    if(l->primeiro->proximo == NULL){
        temp = l->primeiro->info;
        lixo = l->primeiro;
        l->primeiro = NULL;
    }
    else{
        t_no * aux = l->primeiro;
        
        while(aux->proximo->proximo != NULL){
            aux = aux->proximo;
        }
        temp = aux->proximo->info;
        lixo = aux->proximo;
    }

    l->tamanho--;
    free(lixo);
    return temp;
}



// Lista de Exercicios: https://www.facom.ufu.br/~backes/wordpress/ListaED04-Listas.pdf

// Exercicio 13
float media_lista(t_lista l){
    int soma = 0;
    int qtd_elementos = 0;

    t_no * no_atual = l.primeiro;

    if(no_atual == NULL){
        return 0;
    }

    while(no_atual != NULL){
        soma += no_atual->info;
        no_atual = no_atual->proximo;

        qtd_elementos++;
    }

    return (float) soma/qtd_elementos;
}



// Exercicio 16
void copiar_lista(t_lista * destino, t_lista origem){
    t_no * no_atual = origem.primeiro;

    while(no_atual != NULL){
        insere_fim(no_atual->info, destino);
        no_atual = no_atual->proximo;
    }
}



// Exercicio 21
void vetor_para_lista(t_lista * l, int vetor[], int tam_vetor){
    for(int i=0; i<tam_vetor; i++){
        insere_fim(vetor[i], l);
    }
}



// Exercicio 24
void comparar_lista(t_lista l1, t_lista l2){
    t_no * no_atual_l1 = l1.primeiro;
    t_no * no_atual_l2 = l2.primeiro;
    int ehIgual = 1;


    if(no_atual_l1 == NULL && no_atual_l2 == NULL){
        ehIgual = 1;
    }
    else if(no_atual_l1 == NULL || no_atual_l2 == NULL){
        ehIgual = 0;
    }
    else{
        while(ehIgual){
            if(no_atual_l1->info != no_atual_l2->info){
                ehIgual = 0;
            }

            no_atual_l1 = no_atual_l1->proximo;
            no_atual_l2 = no_atual_l2->proximo;

            if(no_atual_l1 == NULL && no_atual_l2 == NULL){
                break;
            }
        }
    }


    if(ehIgual){
        printf("As listas sao iguais!!!\n");
    }
    else{
        printf("As listas sao diferentes!!!\n");
    }
}