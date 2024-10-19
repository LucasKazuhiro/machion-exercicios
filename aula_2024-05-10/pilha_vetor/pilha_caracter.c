#include "pilha_caracter.h"


void constroi_pilha(t_pilha *p, int capacidade){
    p->dados = (char *) malloc (capacidade * sizeof(char));
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
        printf (">> PILHA VAZIA <<\n");
    }
    else{
        printf("   >> PILHA COM VALORES <<\n\n");
        printf("\t -----------\n");
        printf("\t|           |\n");
        printf("      _________________\n");
        for(int i=p->topo-1; i>=0; i--){
            printf("     |                 |\n");
            printf("  %d  |        %c        |\n", i, p->dados[i]);
            printf("     |_________________|\n");
        }
        printf("\t|           |\n");
        printf("\t -----------\n");
        printf("\t      |\n");
        printf("\t      |\n");
        printf("\t      |\n");
        printf("\t      |\n");
        printf("\t      |\n");
        printf("\t       \\\n");
        printf("\t        \\\n");
        printf("\t         |\n");
        printf("\t         |\n");
        printf("\t         |\n");
        printf("\t        /\n");
        printf("\t       /\n");
        printf("\t      /\n");
        printf("\t     /\n");
        printf("\t    /\n");
        printf("\t   /\n");
    }
}

void ehPalindromo(t_pilha * p){
    int ehPalindromo = 1;
    int j = p->topo-1;

    for(int i=0; i != p->topo/2 && ehPalindromo; i++){

        if(p->dados[i] != p->dados[j]){
            printf("  Nao eh palindromo!!");
            ehPalindromo = 0;
        }

        j--;
    }

    if(ehPalindromo && !esta_vazia(p)){
        printf("    Eh palindromo!!");
    }
}