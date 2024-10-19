#include <stdio.h>

int main(){
    
    printf("\n\n\n");

    int vetorA[10];
    int vetorB[10];
    int vetorC[10];


    for(int i=0; i<10; i++){
        printf("Digite o valor de vetorA[%d]: ", i);
        scanf("%d", &vetorA[i]);
    }

    printf("\n\n");

    for(int i=0; i<10; i++){
        printf("Digite o valor de vetorB[%d]: ", i);
        scanf("%d", &vetorB[i]);
    }



    printf("\n\n\nVetor A: ");
    for(int i=0; i<10; i++){
        printf("%4d  ", vetorA[i]);
    }

    printf("\n\n");

    printf("Vetor B: ");
    for(int i=0; i<10; i++){
        printf("%4d  ", vetorB[i]);
    }

    printf("\n\n");

    printf("Vetor C: ");
    for(int i=0; i<10; i++){
        vetorC[i] = vetorA[i] - vetorB[i];
        printf("%4d  ", vetorC[i]);
    }

    printf("\n\n\n");

    return 0;
}