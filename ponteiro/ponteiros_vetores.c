#include <stdio.h>
#include <stdlib.h>

int main(){

    // int v[1000000];  <<== Isso NÃO FUNCIONA
    int *v;
    printf("Tamanho ocupado pelo ponteiro: %d\n", sizeof(v));

    v = (int *) malloc (10 * sizeof(int));
    printf("Tamanho ocupado pelo ponteiro (que esta apontando para o heap para criar um vetor): %u\n\n", sizeof(v));

    printf("Endereco da primeira posicao de v: %p\n\n", v);


    printf("Valores nas posicoes do vetor: \n");
    for(int i=0; i<10; i++){
        printf("Posicao: %p, Valor: %d\n", v+i, v[i]);
    }

    return 0;
}