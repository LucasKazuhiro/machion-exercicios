#include <stdio.h>

int main(){

    char palavra[20];
    int caracter, i=0, count=0;


    printf("Escreva uma palavra: ");

    while((caracter = getchar()) != '\n' && caracter != EOF && i < 20 - 1){
        palavra[i++] = caracter;
        count++;

        if(caracter == ' '){
            count--;
        }
    }

    palavra[i] = '\0';

    printf("A palavra possui %d letras", count);

    return 0;
}