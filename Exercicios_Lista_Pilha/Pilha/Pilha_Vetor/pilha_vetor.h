#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char * dados;
    int topo;
    int capacidade;
} t_pilha;

void constroi_pilha (t_pilha *, int);
int esta_vazia (const t_pilha *);
int esta_cheia (const t_pilha *);
int tamanho (const t_pilha *);
void empilha (t_pilha *, char);
int desempilha (t_pilha *);
void mostra_pilha (t_pilha *);



// Lista de Exercicios: https://www.facom.ufu.br/~backes/wordpress/ListaED06-Pilhas.pdf

int analisar_stringXY(t_pilha, int);        // Exercicio 5
int analisar_parentesis(t_pilha, int);      // Exercicio 8