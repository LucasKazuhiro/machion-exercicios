#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


typedef struct carta {
    int valor[5];
    char naipe[5][8];
} carta;


typedef struct jogador {
    char nome[15];
    char cartas[5][12];
} jogador;


void randomizar_cartas(struct jogador *pessoa, struct carta *deck) {
    char naipes[4][8] = {"Espadas", "Paus", "Copas", "Ouro"};

    for(int i = 0; i < 5; i++) {
        deck->valor[i] = rand() % 14 + 1;
        strcpy(deck->naipe[i], naipes[rand() % 4]);

        sprintf(pessoa->cartas[i], "%d %s", deck->valor[i], deck->naipe[i]);
    }
}



int main() {
    srand(time(NULL));

    carta deck;
    jogador jogadorUm; strcpy(jogadorUm.nome, "Antonio");
    jogador jogadorDois; strcpy(jogadorDois.nome, "Geremias");
    jogador jogadorTres; strcpy(jogadorTres.nome, "Clodosvaldo");
    jogador jogadorQuatro; strcpy(jogadorQuatro.nome, "Aristela");
    jogador jogadorCinco; strcpy(jogadorCinco.nome, "Kristina");

    struct jogador grupo[5] = {jogadorUm, jogadorDois, jogadorTres, jogadorQuatro, jogadorCinco};


    for(int i=0; i<5; i++){
        randomizar_cartas(&grupo[i], &deck);

        printf("%s:\n", grupo[i].nome);
        for(int j=0; j<5; j++){
            printf("%s\n", grupo[i].cartas[j]);
        }
        printf("\n\n");
    }

    return 0;
}