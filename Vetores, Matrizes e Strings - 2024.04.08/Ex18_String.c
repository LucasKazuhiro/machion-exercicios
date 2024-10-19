#include <stdio.h>

int main(){

    printf("\n\n\n");

    char L1, L2, c;
    char frase[51];
    int i = 0;


    printf("Digite L1: ");
    scanf("%c", &L1);

    printf("Digite L2: ");
    scanf(" %c", &L2);

    getchar();
    printf("\nDigite uma frase (limite 50 caracteres): ");
    while((c = getchar()) != '\n' && c != EOF && i < 51 - 1){
        frase[i] = c;
        if(frase[i] == L1){
            frase[i] = L2;
        }
        i++;
    }

    frase[i] = '\0';


    printf("\n\nFrase alterada: %s", frase);
    printf("\n\n\n");

    return 0;
}