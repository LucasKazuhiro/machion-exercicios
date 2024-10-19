#include <stdio.h>
#define LINHAS 3    
#define COLS 3

int main(){
    float notas[LINHAS][COLS];
    int l, c, menor=0, pegarProva=0;
    int qtdPior[COLS] = {0,0,0};

    for(l=0; l<LINHAS; l++){
        for(c=0; c<COLS; c++){
            printf("Digite a nota do aluno <%d> na prova <%d>: ", l, c);
            scanf("%f", &notas[l][c]);
        }
        printf("\n");
    }

    for(l=0; l<LINHAS; l++){
        menor = notas[l][0];
        pegarProva = 0;
        for(c=0; c<COLS; c++){
            if(notas[l][c] < menor){
                menor = notas[l][c];
                pegarProva = c;
            }
        }
        qtdPior[pegarProva]++;
    }

    printf("\n\n");
    for(l=0; l<LINHAS; l++){
        printf("Alunos que tiveram suas Piores notas em P%d: %d\n", l+1, qtdPior[l]);
    }

    return 0;
}