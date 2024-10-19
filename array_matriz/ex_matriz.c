#include <stdio.h>
#define LINHAS 4
#define COLS 3

int main(){

    int matriz[LINHAS][COLS], maiores[4];
    int maior=0;

    for(int l=0; l<LINHAS; l++){
        for(int c=0; c<COLS; c++){
            printf("Informe o valor [%d][%d]: ", l, c);
            scanf("%d", &matriz[l][c]);
        }

        printf("\n");
    }


    for(int l=0; l<LINHAS; l++){
        maior = matriz[l][0];

        for(int c=0; c<COLS; c++){
            if(matriz[l][c] > maior){
                maior = matriz[l][c];
            }
        }

        maiores[l] = maior;
    }


    printf("\n\n       matriz     \t  maior\n\n");
    for(int l=0; l<LINHAS; l++){
        for(int c=0; c<COLS; c++){
            printf("%5d", matriz[l][c]);
        }
        printf("\t\t%5d", maiores[l]);

        printf("\n");
    }



    return 0;
}