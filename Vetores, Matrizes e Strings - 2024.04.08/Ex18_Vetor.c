#include <stdio.h>

int main(){

     printf("\n\n\n");

    int vetor[10];
    int multiplosPor=0;


    for(int i=0; i<10; i++){
        printf("Digite um valor para o vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("\n\nAchar valores multiplos por: ");
    scanf("%d", &multiplosPor);


    printf("\n\n\nMultiplos de %d: ", multiplosPor);
    for(int i=0; i<10; i++){
        if(vetor[i] % multiplosPor == 0){
            printf("%d ", vetor[i]);
        }
    }

    printf("\n\n\n");

    return 0;

}