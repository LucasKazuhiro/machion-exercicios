#include "vetor.h"

void gera_vetor(int v[], int t, int l){
    srand(time(0));
    
    for(int i=0; i<t; i++){
        v[i] = rand() % l;
    }
}


void mostra_vetor(int v[], int t, char *msg){
    printf("\n%s\n", msg);
    for(int i=0; i<t; i++){
        printf("%d ", v[i]);
    }

    printf("\n");
}


void selection_sort(int v[], int t){
    int i, j;
    int aux, pos_menor;

    for(i=0; i<t-1; i++){
        pos_menor = i;

        for(j=i+1; j<t; j++){
            if(v[j] < v[pos_menor]){
                pos_menor = j;
            }
        }

        aux = v[pos_menor];
        v[pos_menor] = v[i];
        v[i] = aux;
    }
}


void insertion_sort(int v[], int n){

    for(int j=1; j<n; j++){
        int x = v[j];
        int i;

        for(i=j-1; i >= 0 && v[i] > x; i--){
            v[i+1] = v[i];
        }

        v[i+1] = x;
    }
}

int busca_simples(int v[], int t, int x, int *count){
    *count = 0;
    for(int i=0; i<t; i++){
        *count = *count + 1;
        if(v[i] == x){
            return 1;
        }
    }

    return 0;
}


int busca_binaria(int v[], int t, int x, int *count){
    *count = 0;

    int inicio=0, fim = t-1, meio;

    while(inicio <= fim){
        ++*count;
        meio = (inicio + fim) / 2;

        if(v[meio] == x){
            return meio;
        }

        if(x > v[meio]){
            inicio = meio + 1;
        }
        else{
            fim = meio - 1;
        }
    }

    return -1;
}