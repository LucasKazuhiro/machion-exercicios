#include <stdio.h>
#define DIMENSAO 3

int main(){

    int matriz[DIMENSAO][DIMENSAO];
    int l, c, soma=0;

    for(l=0; l<DIMENSAO; l++){
        for(c=0; c<DIMENSAO; c++){
            printf("Informe um valor [%d][%d]: ", l, c);
            scanf("%d", &matriz[l][c]);

            if(l == c){
                soma += matriz[l][c];
            }
        }

        printf("\n");
    }


    printf("\n\n");
    for(l=0; l<DIMENSAO; l++){
        for(c=0; c<DIMENSAO; c++){
            printf("%5d ", matriz[l][c]);
        }
        printf("\n");
    }
    printf("---------------------\n");
    for(l=0; l<DIMENSAO; l++){
        printf("%5d ", matriz[l][l]);
    }


    printf("\n\nA soma da diagonal eh %d\n\n", soma);

    return 0;
}