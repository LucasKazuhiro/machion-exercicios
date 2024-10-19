#include "no.h"

typedef struct{
    int tamanho;
    t_no * topo;
} t_pilha;

void inicializa_pilha(t_pilha *);
int esta_vazia(t_pilha *);
void empilha(int, t_pilha *);
void mostra_pilha(t_pilha);
int desempilha(t_pilha *);




// https://www.facom.ufu.br/~backes/wordpress/ListaED06-Pilhas.pdf

int sao_iguais(t_pilha, t_pilha);       // Exercicio 13
void copiar_pilha(t_pilha *, t_pilha);     // Exercicio 14