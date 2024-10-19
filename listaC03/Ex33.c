#include <stdio.h>

int main(){

    int count=0, multiplicador=0;
    int qtd, multiplo_Um, multiplo_Dois;


    printf("Insira a quantidade de numeros: ");
    scanf("%d", &qtd);
    printf("Insira o primeiro multiplo: ");
    scanf("%d", &multiplo_Um);
    printf("Insira o segundo multiplo: ");
    scanf("%d", &multiplo_Dois);


    printf("\n\nMultiplos de %d ou %d\n", multiplo_Um, multiplo_Dois);
    while(count != qtd){
        if(multiplicador % multiplo_Um == 0 || multiplicador % multiplo_Dois == 0){
            printf("%d ", multiplicador);
            count++;
        }

        multiplicador++;
    }


    return 0;
}