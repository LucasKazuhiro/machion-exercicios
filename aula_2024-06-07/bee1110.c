#include <stdio.h>
#include<stdlib.h>

typedef struct{
    int * v;
    int primeiro;
    int ultimo;
    int tamanho;
    int capacidade;
} t_fila;

t_fila * constroi_fila(int capacidade){
    t_fila * f = (t_fila *) malloc (sizeof(t_fila));

    if(f != NULL){
        f->v = (int *) malloc (capacidade * sizeof(int));

        if(f->v == NULL){
            return NULL;
        }

        f->capacidade = capacidade;
        f->tamanho = 0;
        f->primeiro = 0;
        f->ultimo = 0;
    }
    return f;
}


int estavazia(t_fila *f){
    return f->tamanho == 0;
}

int esta_cheia(t_fila *f){
    return f->tamanho == f->capacidade;
}

int proxima_posicao(int posicao, t_fila *f){
    return (posicao +1) % f->capacidade;
}

int posicao_anterior(int posicao, t_fila * f){
    return (posicao + f->capacidade - 1) % f->capacidade;
}


int enfileira(int i, t_fila *f){
    if(esta_cheia(f)){
        return 0;
    }
    else{
        f->v[f->ultimo] = i;
        f->ultimo = proxima_posicao(f->ultimo, f);
        f->tamanho++;
        return 1;
    }
}

int desenfileira(t_fila *f){
    int i = f->v[f->primeiro];
    f->primeiro = proxima_posicao(f->primeiro, f);
    f->tamanho--;
    return i;
}


void mostra_fila(t_fila * f){
    int i = f->primeiro;

    while(i < posicao_anterior(f->ultimo, f)){
        printf("%d, ", f->v[i]);
        i = proxima_posicao(i, f);
    }

    printf("%d\n", f->v[i]);
}


void libera_fila(t_fila * f){
    free(f->v);
    free(f);
}



int main(){
    int n;
    scanf("%d", &n);
    
    while(n>0){
        t_fila * fila = constroi_fila(n);
        t_fila * descartados = constroi_fila(n-1);

        for(int i=1; i<=n; i++){
            enfileira(i, fila);
        }

        while(fila->tamanho >= 2){
            enfileira(desenfileira(fila), descartados);
            enfileira(desenfileira(fila), fila);
        }

        printf("Discared cards: ");
        mostra_fila(descartados);
        printf("Remaining card: ");
        mostra_fila(fila);

        libera_fila(fila);
        libera_fila(descartados);

        scanf("%d", &n);
    }
       
    return 0;
}