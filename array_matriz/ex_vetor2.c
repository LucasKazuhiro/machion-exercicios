#include <stdio.h>
#define T 5

int main(){

    int vetor[T];
    int menor=0, count=0;

    printf("Informe um valor [0]: ");
    scanf("%d", &vetor[0]);
    menor = vetor[0];

    for(int i=1; i<T; i++){
        printf("Informe um valor [%d]: ", i);
        scanf("%d", &vetor[i]);

        if(vetor[i] < menor){
            menor = vetor[i];
            count = 1;
        }
        else if(vetor[i] == menor){
            count++;
        }
    }

    printf("O menor valor eh %d e ele aparece %d veze(s)", menor, count);

    return 0;
}