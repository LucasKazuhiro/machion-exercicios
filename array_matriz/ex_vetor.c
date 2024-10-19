#include <stdio.h>
#define T 10

int main(){

    int maior=0, pos=0;
    int vetor[T];

    for(int i=0; i<T; i++){
        printf("Digite um numero [%d]: ", i);
        scanf("%d", &vetor[i]);

        if(vetor[i] > maior){
            maior = vetor[i];
            pos = i;
        }
    }

    printf("O maoir valor eh %d que se encontra na posicao %d", maior, pos);


    return 0;
}