#include <stdio.h>

int main(){
    // Variaveis
    int primeiroNum = 0;
    int segundoNum = 0;

    printf("\n\n");

    printf("Digite o primeiro numero: ");
    scanf("%d", &primeiroNum);

    printf("Digite o segundo numero: ");
    scanf("%d", &segundoNum);


    if(primeiroNum > segundoNum){
        printf("O maior numero eh %d", primeiroNum);
    }
    else{
        printf("O maior numero eh %d", segundoNum);
    }


    return 0;
}