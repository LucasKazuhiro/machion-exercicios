#include <stdio.h>
#include <stdlib.h>

int main(){

    int t, i, *v;


    printf("Digite o tamanho do vetor: ");
    scanf("%d", &t);

    v = (int *) malloc (t * sizeof(int));

    for(i=0; i<t; i++){
        printf("Insira um valor na posical %d: ", i);
        scanf("%d", &v[i]);
    }

    printf("\n\n");
    printf("Vetor Digitado: \n");
    for(i=0; i<t; i++){
        printf("Posicao: %p, Valor: %d\n", v+i, v[i]);
    }



    return 0;
}