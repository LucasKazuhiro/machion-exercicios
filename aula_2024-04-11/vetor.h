#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gera_vetor(int v[], int t, int l);
void mostra_vetor(int v[], int t, char *msg);
void selection_sort(int v[], int t);
void insertion_sort(int v[], int n);

// Devolve '1' se 'x' pertence ao vetor, ou '0' caso contrario.
int busca_simples(int v[], int t, int x, int *count);

// Devolve a posição do 'x' se ele pertencer ao vetor, ou '-1' caso contrario.
int busca_binaria(int v[], int t, int x, int *count);