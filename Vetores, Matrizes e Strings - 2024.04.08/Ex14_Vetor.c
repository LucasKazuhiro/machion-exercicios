#include <stdio.h>
#include <stdbool.h>

int main(){


    int vetor[10];
    int repetidos[5];
    int count=0;
    bool ehRepetido = false;



    for(int i=0; i<10; i++){
        printf("Digite o valor para o vetor [%d]: ", i);
        scanf("%d", &vetor[i]);
    }


    printf("\n\n\nVetor: ");
    for(int i=0; i<10; i++){
        printf("%d ", vetor[i]);
    }

    printf("\n\nValores repetidos: ");
    for(int i=0; i<10; i++){
        for(int k=i+1; k<10; k++){
            if(vetor[i] == vetor[k]){
                for(int q=0; q<5; q++){
                    if(vetor[i] == repetidos[q]){
                        ehRepetido = true;
                        break;
                    }
                }

                if(!ehRepetido){
                    printf("%d ", vetor[i]);
                    repetidos[count++] = vetor[i];
                    break;
                }

                ehRepetido = false;
            }
        }
    }

    printf("\n\n\n");


    return 0;
}