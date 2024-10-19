#include <stdio.h>
#include <stdlib.h>
#include <time.h>


typedef struct{
    int num, naipe;
} t_carta;

typedef struct{
    t_carta carta;
    int posse;
} t_carta_jogo;



t_carta gera_carta(){
    t_carta carta;

    carta.num = rand() % 13 + 1;
    carta.naipe = rand() % 4 + 1;

    return carta;
}


t_carta * gera_ponteiro_carta(){
    t_carta * p_carta = (t_carta *) malloc (sizeof(t_carta)); 

    p_carta->num = rand() % 13 + 1;
    p_carta->naipe = rand() % 4 + 1;

    return p_carta;
}


void mostra_carta(t_carta carta){
    char diferentes[4][7] = {"As", "Valete", "Dama", "Rei"};
    char naipes[4][8] = {"Ouros", "Espadas", "Copas", "Paus"};

    if(carta.num == 1){
        printf("%s de %s\n", diferentes[0], naipes[carta.naipe-1]);
    }
    else if(carta.num >= 11){
        printf("%s de %s\n", diferentes[carta.num-10], naipes[carta.naipe-1]);
    }
    else{
        printf("%d de %s\n", carta.num, naipes[carta.naipe-1]);
    }
    
}


void distribui_cartas_jogador(t_carta jog[]){
    for(int i=0; i<5; i++){
        jog[i] = gera_carta();
    }
}

void mostra_inteiro(int i){
    printf("%d\n", i);
}

void mostra_mao(t_carta jog[]){
    for(int i=0; i<5; i++){
        mostra_carta(jog[i]);
    }
}


void compra_baralho(int baralho[5][14]){
    for(int i=1; i<5; i++){
        for(int j=1; j<14; j++){
            baralho[i][j] = 0;
        }
    }
}

void sorteio(int baralho[5][14], t_carta jog[], int i, int j){
    int linha = rand() % 4 + 1;
    int coluna = rand() % 13 + 1;

    while(baralho[linha][coluna] != 0){
        linha = rand() % 4 + 1;
        coluna = rand() % 13 + 1;
    }
    
    baralho[linha][coluna] = j;
    jog[i].naipe = linha;
    jog[i].num = coluna;
}

void distribui_cartas(int baralho[5][14], t_carta jog1[], t_carta jog2[]){
    for(int i=0; i<5; i++){
        sorteio(baralho, jog1, i, 1);
        sorteio(baralho, jog2, i, 2);
    }
}




int main(){
    printf("\n\n\n\n\n");
    srand(time(0));

    // Criando cartas e gerando seus valores
    t_carta carta1, carta2;
    
    carta1 = gera_carta();
    carta2 = gera_carta();

    printf("Mostrando Cartas geradas 1 e 2:\n");
    mostra_carta(carta1);
    mostra_carta(carta2);



    // Cria ponteiro na função principal
    printf("\n\n\n\nMostrando Cartas geradas por meio de ponteiros:\n");
    
    t_carta * p1_carta;
    p1_carta = (t_carta *) malloc (sizeof(t_carta));
    *p1_carta = gera_carta();
    printf("Ponteiro criado no main():\n");
    mostra_carta(*p1_carta);

    // Cria ponteiro dentro da função 'gera_ponteiro_carta'
    t_carta * p2_carta = gera_ponteiro_carta();
    printf("\nPonteiro criado direto na funcao 'gera_ponteiro_carta':\n");
    mostra_carta(*p2_carta);



    // Criando cartas para os jogadores
    printf("\n\n\n\nCriando jogadores e cartas para cada jogador individualmente:\n");

    t_carta jog1[5], jog2[5];

    distribui_cartas_jogador(jog1);
    printf("Jogador 1:\n");
    mostra_mao(jog1);

    distribui_cartas_jogador(jog2);
    printf("\nJogador 2:\n");
    mostra_mao(jog2);



    // Gerando baralho
    printf("\n\n\n\nCriando o baralho e cartas para todos os jogadores de uma vez:\n");
    int baralho[5][14];
    compra_baralho(baralho);

    distribui_cartas(baralho, jog1, jog2);

    printf("Jogador 1:\n");
    mostra_mao(jog1);
    
    printf("\nJogador 1:\n");
    mostra_mao(jog2);

    printf("\n\n\n\n\n");
    return 0;
}