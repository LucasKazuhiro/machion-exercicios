#include <stdio.h>
#include <stdlib.h>
#define T 6

int main(){


    int *vetor = (int *) malloc (T * sizeof(int));
    int m1, m2;

    for(int i=0; i<T; i++){
        printf("Digite o valor da posicao [%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    m1 = m2 = vetor[0];

    for(int i=1; i<T; i++){
        if(vetor[i] > m1){
            m2 = m1;
            m1 = vetor[i];
        }
        else if(vetor[i] > m2){
            m2 = vetor[i];
        }
    }


    printf("O rei: %d\nO principe: %d\n", m1, m2);

    return 0;
} 