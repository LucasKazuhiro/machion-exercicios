#include <stdio.h>

int main(){
    float notaUm = 0;
    float notaDois = 0;
    float mediaNota = 0;

    printf("\n\n");

    printf("Insira a primeira nota: ");
    scanf("%f", &notaUm);

    if(!(notaUm < 0 || notaUm > 10)){
        printf("Insira a segunda nota: ");
        scanf("%f", &notaDois);

        if(!(notaDois < 0 || notaDois > 10)){
            mediaNota = (notaUm + notaDois) / 2;

            printf("A media do aluno eh %.2f", mediaNota);
        }
        else{ printf("Insira uma nota valida!"); }
    }
    else{ printf("Insira uma nota valida!"); }


    return 0;
}