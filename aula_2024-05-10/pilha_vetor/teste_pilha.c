#include <time.h>
#include "pilha.h"

int main () {
    srand (time(0));

    int limite = 0;
    t_pilha p;
    constroi_pilha(&p, 100);

    do {
        if((rand() % 3) > 0){
            if (!esta_cheia(&p)){
                empilha(&p, rand()%100);
            }
        }
        else{
            if (!esta_vazia(&p)){
                printf ("%d foi desempilhado\n", desempilha(&p));
            }
        }

        mostra_pilha(&p);
        printf ("\n\n-----------\n\n\n");

        limite++;
    } while (limite != 20);
    return 0;
}
