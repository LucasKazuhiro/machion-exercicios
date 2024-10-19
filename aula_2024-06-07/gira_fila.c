#include <time.h>
#include "fila.h"

int main(){
    printf("\n\n\n\n\n");
    srand(time(0));

    t_fila * fila = constroi_fila(12);

    do{
        printf("\n\n");
        if(rand() % 2){
            enfileira(rand() % 10, fila);
        }
        else{
            int a;
            if(desenfileira(&a, fila)){
                printf("%d saiu da fila\n\n\n", a);
            }
        }
        printf("Fila:  ");
        mostra_fila(fila);
        printf("Vetor: ");
        mostra_vetor(fila);

    }while(!estavazia(fila));

    printf("\n\n\n\n\n");
    return 0;
}