#include "fila.h"
#include <time.h>

int main(){
    printf("\n\n\n\n\n");
    srand(time(0));

    t_fila fila, filaDois;
    inicia_fila(&fila);
    inicia_fila(&filaDois);



//Testa enfileira() e desenfileira()
/*
    for(int i=0; i<10; i++){
        int random = rand() % 3;
        if(random == 1 || random == 2){
            enfileira(rand() % 10 + 1, &fila);
        }
        else{
            if(!esta_vazia(&fila)){
                desenfileira(&fila);
            }
        }
        mostra_fila(&fila);
    }
*/


// Testa ligar_filas()

    for(int i=0; i<5; i++){
        enfileira(i, &fila);
    }
    for(int i=5; i<10; i++){
        enfileira(i, &filaDois);
    }

    mostra_fila(&fila);
    mostra_fila(&filaDois);

    printf("\n\nJuntando as filas:\n");
    junta_filas(&filaDois, &fila);
    mostra_fila(&filaDois);

    printf("\n\nInvertendo fila:\n");
    inverte_fila(&filaDois);
    mostra_fila(&fila);



// Testa qtd_impar()
    printf("\n\n\n A quantidade de numeros impares eh: %d",qtd_impar(&fila));

    printf("\n\n\n\n\n");
    return 0;
}