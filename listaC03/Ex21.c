#include <stdio.h>

int main(){

    int numeroUm, numeroDois, i, soma=0, multiplicacao=1;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numeroUm);
    printf("Digite o segundo numero: ");
    scanf("%d", &numeroDois);

    

    if(numeroUm < numeroDois){
        i = numeroUm;
        if(numeroUm % 2 == 1){
            i = numeroUm + 1;
        }
        for(i=i; i<=numeroDois; i+=2){
            soma += i;
        }


        i = numeroUm;
        if(numeroUm % 2 == 0){
            i = numeroUm + 1;
        }
        for(i=i; i<=numeroDois; i+=2){
            multiplicacao *= i;
        }
    }
    else{
        i = numeroUm;
        if(numeroUm % 2 == 1){
            i = numeroUm - 1;
        }
        for(i=i; i>=numeroDois; i-=2){
            soma += i;
        }


        i = numeroUm;
        if(numeroUm % 2 == 0){
            i = numeroUm - 1;
        }
        for(i=i; i>=numeroDois; i-=2){
            multiplicacao *= i;
        }
    }

    printf("\n");
    printf("A soma dos numeros pares no intervalo definido eh %d", soma);
    printf("\nA multiplicacao dos numeros impares no intervalo definido eh %d", multiplicacao);


    return 0;
}