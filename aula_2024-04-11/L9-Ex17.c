#include <stdio.h>

void frac(float num, int *inteiro, float *fracao){
    *inteiro = (int)num;
    *fracao = num - *inteiro; 
}

int main(){

    int inteiro;
    float fracao, valor;

    printf("Insira um valor: ");
    scanf("%f", &valor);
    frac(valor, &inteiro, &fracao);

    printf("Valor inserido: %f\n", valor);
    printf("Parte Inteira: %d\n", inteiro);
    printf("Parte Fracionaria: %f\n", fracao);

    return 0;
}