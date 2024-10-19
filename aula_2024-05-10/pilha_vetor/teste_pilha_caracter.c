#include <time.h>
#include "pilha_caracter.h"

int main () {
    printf("\n\n\n");

    char c;
    int tam, lim=0;
    t_pilha p;

    printf("Tamanho da String: ");
    scanf("%d", &tam);
    tam = 5;
    constroi_pilha(&p, tam);

    getchar();

    printf("\nDigite uma palavra: ");
    while((c=getchar()) != '\n' && lim < tam && c!= EOF){
        if(c != ' '){
            empilha(&p, c);
            lim++;
        }
    }

    printf("\n\n");
    mostra_pilha(&p);


    ehPalindromo(&p);

    printf("\n\n\n");
    return 0;
}
