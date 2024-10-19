#include <stdio.h>


int main(){
    int vetor[8] = {1,2,3,4,5,6,7,8};

    int posicao_Primeira, posicao_Segunda;


    printf("Escolha a primeira posicao (0-7): ");
    scanf("%d", &posicao_Primeira);
    printf("Escolha a segunda posicao (0-7): ");
    scanf("%d", &posicao_Segunda);


    printf("\n%d ", vetor[posicao_Primeira]);
    printf("%d", vetor[posicao_Segunda]);

    printf("\nSoma = %d", vetor[posicao_Primeira] + vetor[posicao_Segunda]);
}