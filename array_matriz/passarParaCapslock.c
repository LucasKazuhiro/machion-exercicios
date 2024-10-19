#include <stdio.h>
#define tamanho 30

int main(){

    int count=0;
    char frase[tamanho], c;

    printf("Informe uma frase: ");
    while((c=getchar()) != '\n' && c != EOF && count < tamanho){
        frase[count] = c;

        if((int)frase[count] >= 97 && (int)frase[count] <=122){
            frase[count] -= 32;
        }

        count++;
    }
    frase[count] = '\0';

    printf("%s", frase);

    return 0;
}