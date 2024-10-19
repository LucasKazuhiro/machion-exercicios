#include <stdio.h>

int main(){

    float notaUm = 0, notaDois = 0, notaTres = 0;
    float mediaFinal = 0;

    printf("\n\n");

    printf("Digite a primeira nota: ");
    scanf("%f", &notaUm);

    printf("Digite a segunda nota: ");
    scanf("%f", &notaDois);

    printf("Digite a terceira nota: ");
    scanf("%f", &notaTres);


    mediaFinal = (notaUm + notaDois + (notaTres * 2)) / 4;
    mediaFinal *= 10;

    printf("\n");

    printf("A media foi %.2f\n", mediaFinal);

    if(mediaFinal >= 60){ 
        printf("O aluno foi APROVADO!");
    }
    else{
        printf("O aluno foi REPROVADO!");
    }


    return 0;
}