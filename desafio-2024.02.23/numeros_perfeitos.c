#include <stdio.h>

int main(){

    printf("\n\n");

    

    int numero = 0, soma = 0;

    printf("Insira um numero: ");
    scanf("%d", &numero);


    for(int i=1; i<=numero/2; i++){
        if(numero % i == 0){
            soma = soma + i;
        }
    }
    

    if(numero == soma){
        printf("\nSUCESSO:: O numero %d eh PERFEITO", numero);
    }
    else{
        printf("\nFALHOU:: O numero %d nue perfeito", numero);
    }
    


    printf("\n\n");

    return 0;
}