#include "vetor.h"

int main(){

    int *v, t, l, x, count;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &t);

    printf("Digite o limite de geracao: ");
    scanf("%d", &l);

    v = (int *) malloc (t * sizeof(int));



    gera_vetor(v, t, l);
    mostra_vetor(v, t, "Vetor gerado: ");

    printf("\n\n\nDigite o valor para a busca: ");
    scanf("%d", &x);

    if(busca_simples(v, t, x, &count)){
        printf("\nValor %d encontrado (Busca Simples)", x);
    }
    else{
        printf("\nValor nao encontrado (Busca Simples)");
    }

    printf("\nA busca simples realizou %d teste(s)", count);



    insertion_sort(v, t);
    mostra_vetor(v, t, "\n\nVetor Ordenado:");

    int pos = busca_binaria(v, t, x, &count);
    if(pos == -1){
        printf("\nValor nao encontrado (Busca Binaria)");
    }
    else{
        printf("\nValor %d encontrado (Busca Binaria) na posicao %d", x, pos);
    }

    printf("\nA busca simples realizou %d teste(s)", count);
    

    return 0;
}