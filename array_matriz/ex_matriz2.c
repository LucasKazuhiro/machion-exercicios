#include <stdio.h>
#define LINHAS 4
#define COLS 3


int main(){

    int matriz[LINHAS][COLS], vetorSoma[3];
    int soma=0;

    for(int l=0; l<LINHAS; l++){
        for(int c=0; c<COLS; c++){
            printf("Informe um valor [%d][%d]: ", l, c);
            scanf("%d", &matriz[l][c]);
        }

        printf("\n");
    }


    for(int c=0; c<COLS; c++){
        soma=0;
        for(int l=0; l<LINHAS; l++){
            soma += matriz[l][c];
        }   

        vetorSoma[c] = soma;
    }


    printf("\n\n         Matriz       \t  Soma\n\n");
    for(int c=0; c<COLS; c++){
        for(int l=0; l<LINHAS; l++){
            printf("%5d", matriz[l][c]);
        }

        printf("\t%5d", vetorSoma[c]);
        printf("\n");
    }


    return 0;
}