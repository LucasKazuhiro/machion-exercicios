#include <stdio.h>

int main(){

    int matrizUm[4][4];
    int matrizDois[4][4];
    int matrizMaior[4][4];




    printf("\n\n\n Matriz Um\n");
    for(int lin=0; lin<4; lin++){
        for(int col=0; col<4; col++){
            printf("Digite um valor para [%d][%d]: ", lin+1, col+1);
            scanf("%d", &matrizUm[lin][col]);
        }
    }

    printf("\n\n\n Matriz Dois\n");
    for(int lin=0; lin<4; lin++){
        for(int col=0; col<4; col++){
            printf("Digite um valor para [%d][%d]: ", lin+1, col+1);
            scanf("%d", &matrizDois[lin][col]);
        }
    }



    for(int lin=0; lin<4; lin++){
        for(int col=0; col<4; col++){
            if(matrizUm[lin][col] > matrizDois[lin][col]){
                matrizMaior[lin][col] = matrizUm[lin][col];
            }
            else{
                matrizMaior[lin][col] = matrizDois[lin][col];
            }
        }
    }



    printf("\n\n\n          Matriz Um\n\n");
    for(int lin=0; lin<4; lin++){
        for(int col=0; col<4; col++){
            printf("%5d  ", matrizUm[lin][col]);
        }
        printf("\n");
    }

    
    printf("\n\n\n         Matriz Dois\n\n");
    for(int lin=0; lin<4; lin++){
        for(int col=0; col<4; col++){
            printf("%5d  ", matrizDois[lin][col]);
        }
        printf("\n");
    }

    printf("\n\n\n        Matriz Maior\n\n");
    for(int lin=0; lin<4; lin++){
        for(int col=0; col<4; col++){
            printf("%5d  ", matrizMaior[lin][col]);
        }
        printf("\n");
    }

    return 0;
}