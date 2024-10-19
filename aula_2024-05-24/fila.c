#include "fila.h"


void inicia_fila(t_fila * f){
    f->primeiro = NULL;
    f->ultimo = NULL;
    f->qtd_elementos = 0;
}

int esta_vazia(t_fila * f){
    return f->qtd_elementos == 0;
}

void enfileira(int n, t_fila * f){
    t_no * novo = constroi_no(n);

    if(esta_vazia(f)){
        f->primeiro = novo;
    }
    else{
        f->ultimo->proximo = novo;
    }

    f->ultimo = novo;
    f->qtd_elementos++;
}

int desenfileira(t_fila * f){
    t_no * lixo = f->primeiro;
    int temp = f->primeiro->info;

    f->primeiro = f->primeiro->proximo;
    f->qtd_elementos--;

    if(esta_vazia(f)){
        f->ultimo = NULL;
    }

    free(lixo);
    return temp;
}

void mostra_fila(t_fila * f){
    if(esta_vazia(f)){
        printf("A fila esta vazia!!!");
    }
    else{
        t_no * aux = f->primeiro;
        while(aux != NULL){
            printf("%d --> ", aux->info);
            aux = aux->proximo;
        }
    }
    printf("\n\n");
}

void junta_filas(t_fila * f1, t_fila * f2){
    f1->ultimo->proximo = f2->primeiro;
    f1->ultimo = f2->ultimo;
    f1->qtd_elementos = f1->qtd_elementos + f2->qtd_elementos;

    // Resetar f2 (fila 2)
    inicia_fila(f2);
}

int qtd_impar(t_fila * f){
    if(esta_vazia(f)){
        return 0;
    }

    t_no * no_atual = f->primeiro;
    int impar=0;
    while(no_atual != NULL){
        if(no_atual->info % 2 == 1){
            impar++;
        }
        no_atual = no_atual->proximo;
    }

    return impar;
}

void inverte_fila(t_fila * f){
    t_no * anterior = f->primeiro;
    t_no * atual = f->primeiro->proximo;
    t_no * seguinte;

    while(atual->proximo != NULL){
        seguinte = atual->proximo;
        atual->proximo = anterior;

        anterior = atual;
        atual = seguinte;
    }

    t_no * prim = f->primeiro;

    f->primeiro = f->ultimo;
    f->primeiro->proximo = anterior;

    f->ultimo = prim;
    f->ultimo->proximo = NULL;
}