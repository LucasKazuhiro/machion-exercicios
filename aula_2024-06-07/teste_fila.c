#include "fila.h"

int main(){
    printf("\n\n\n\n\n");

    t_fila * fila = constroi_fila(10);
    
    if(estavazia(fila)){
        printf("Fila Vazia!\n");
    }
    else{
        printf("Fila tem gente!\n");
    }

    printf("Adicionando elementos na fila circular...\n");
    int a=10;
    while(enfileira(a++, fila));

    if(esta_cheia(fila)){
        printf("Fila esta cheia!\n");
    }
    else{
        printf("Fila tem lugar\n");
    }
    printf("\n\n\nFila: ");
    mostra_fila(fila);
    printf("\n\n");

    while(desenfileira(&a, fila)){
        printf("%d foi atendido!\n", a);
    }


    printf("\n\n\n\n\n");
    return 0;
}