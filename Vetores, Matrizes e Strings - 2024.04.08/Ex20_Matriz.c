#include <stdio.h>

int main(){

    float matriz[3][6];
    float soma=0, media=0;

    printf("\n\n");

    for(int lin=0; lin<3; lin++){
        for(int col=0; col<6; col++){
            printf("Digite um valor para [%d][%d]: ", lin, col);
            scanf("%f", &matriz[lin][col]);
        }
    }



    printf("\n\n\n\n                  Matriz\n\n");
    for(int numCol=1; numCol <= 6; numCol++){
        printf("Col %d   ", numCol);
    }
    printf("\n\n");
    for(int lin=0; lin<3; lin++){
        for(int col=0; col<6; col++){
           printf("%5.2f   ", matriz[lin][col]);
        }

        printf("\n");
    }


    for(int lin=0; lin<3; lin++){
        for(int col=0; col<6; col++){
            if((col+1) % 2 != 0){
                soma += matriz[lin][col];
            }

            if(col == 1 || col == 3){
                media += matriz[lin][col];
            }

            if(col == 5){
                matriz[lin][col] = matriz[lin][0] + matriz[lin][1];
            }
        }
    }

    media /= 6;



    printf("\n\n\n\n\n\n");
    printf("A soma das colunas impares eh %.2f\n", soma);
    printf("A media da segunda e quarta coluna eh %.2f\n", media);

    printf("\n\n\n             Matriz Modificada\n\n");
    for(int numCol=1; numCol <= 6; numCol++){
        printf("Col %d   ", numCol);
    }
    printf("\n\n");
    for(int lin=0; lin<3; lin++){
        for(int col=0; col<6; col++){
           printf("%5.2f   ", matriz[lin][col]);
        }

        printf("\n");
    }


    return 0;
}