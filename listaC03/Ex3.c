#include <stdio.h>

int main(){

    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for(int i=0; i<=numero; i+=2){
        printf("%d ", i);
    }


    return 0;
}