#include <stdio.h>

int main(){

    int notas[15];
    double media=0;


    for (int i=0; i<15; i++){
        printf("Insira a nota do aluno [%d]: ", i+1);
        scanf("%d", &notas[i]);

        media += notas[i];
    }

    media /= 15;

    printf("\n\nMedia Geral: %.2f", media);
    

    return 0;
}