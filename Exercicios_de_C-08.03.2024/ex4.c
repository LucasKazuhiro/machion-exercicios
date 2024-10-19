#include <stdio.h>

int main(){
    char nome[50];
    int i;

    printf("Informe seu nome: ");
    scanf("%s", nome);


    for(i=0; i<4; i++){
        printf("%c", nome[i]);
    }

    return 0;
}