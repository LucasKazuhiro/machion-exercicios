#include "no.h"

typedef struct{
    t_no * primeiro;
    t_no * ultimo;
    int qtd_elementos;
} t_fila;

void inicia_fila(t_fila *);
int esta_vazia(t_fila *);
void enfileira(int, t_fila *);
int desenfileira(t_fila *);
void mostra_fila(t_fila *);
void junta_filas(t_fila *, t_fila *);
int qtd_impar(t_fila *);
void inverte_fila(t_fila *);