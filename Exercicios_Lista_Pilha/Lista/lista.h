#include "no.h"

typedef struct{
    int tamanho;
    t_no * primeiro;
} t_lista;

void inicializa_lista(t_lista *);
int esta_vazia(t_lista *);
void insere_inicio(int, t_lista *);
void insere_fim(int, t_lista *);
void mostra_lista(t_lista);
int remove_inicio(t_lista *);
int remove_fim(t_lista *);





// Lista de Exercicios: https://www.facom.ufu.br/~backes/wordpress/ListaED04-Listas.pdf

float media_lista(t_lista);                                 // Exercicio 13
void copiar_lista(t_lista *, t_lista);                      // Exercicio 16
void vetor_para_lista(t_lista *, int[], int tam_vetor);     // Exercicio 21
void comparar_lista(t_lista, t_lista);                      // Exercicio 24