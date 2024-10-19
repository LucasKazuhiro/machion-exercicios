#include <stdio.h>

int main(){

    int tamanhoVetor = 5;

    int vetorUm[tamanhoVetor], vetorDois[tamanhoVetor];
    int produto_Escalar=0;


    for(int i=0; i<tamanhoVetor; i++){
        printf("Insira o valor para o Vetor 1: ");
        scanf("%d", &vetorUm[i]);

        printf("Insira o valor para o Vetor 2: ");
        scanf("%d", &vetorDois[i]);

        produto_Escalar = produto_Escalar + (vetorUm[i] * vetorDois[i]);
        printf("\n");
    }

    printf("\n\n");
    for(int i=0; i<tamanhoVetor; i++){
        printf("%d ", vetorUm[i]);
    }
    printf("\n");
    for(int i=0; i<tamanhoVetor; i++){
        printf("%d ", vetorDois[i]);
    }
    printf("\nProduto Escalar: %d", produto_Escalar);

    return 0;
}