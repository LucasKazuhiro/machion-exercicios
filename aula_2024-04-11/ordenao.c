#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include <windows.h>



void gera_vetor(int v[], int t, int l){
    for(int i=0; i<t; i++){
        v[i] = rand() % l;
    }
}


void mostra_vetor(int v[], int t, char *msg){
    printf("\n%s\n", msg);
    for(int i=0; i<t; i++){
        printf("%d ", v[i]);
    }

    printf("\n");
}


void selection_sort(int v[], int t){
    int i, j;
    int aux, pos_menor;

    for(i=0; i<t-1; i++){
        pos_menor = i;

        for(j=i+1; j<t; j++){
            if(v[j] < v[pos_menor]){
                pos_menor = j;
            }
        }

        aux = v[pos_menor];
        v[pos_menor] = v[i];
        v[i] = aux;
    }
}


void insertion_sort(int v[], int n){

    for(int j=1; j<n; j++){
        int x = v[j];
        int i;

        for(i=j-1; i >= 0 && v[i] > x; i--){
            v[i+1] = v[i];
        }

        v[i+1] = x;
    }
}




int main(){
    int t, l;
    int *v;
    int ini, fim;
    srand(time(0));
    
    printf("Escolha o tamanho do vetor (0 encerra): ");
    scanf("%d", &t);


    while(t > 0){
        v = (int *) malloc (t * sizeof(int));

        printf("Escolha o limite da geracao: ");
        scanf("%d", &l);

        gera_vetor(v, t, l);
        //mostra_vetor(v, t, "Vetor gerado:");




        ini = time(0);
        selection_sort(v, t);
        fim = time(0);

        //mostra_vetor(v, t, "Vetor ordenado (selection): ");
        printf("O metodo 'selection' demorou %lu segundos para o tamanho %d\n", fim-ini, t);




        ini = time(0);
        insertion_sort(v, t);
        fim = time(0);

        //mostra_vetor(v, t, "Vetor ordenado (selection): ");
        printf("O metodo 'insertion' demorou %lu segundos para o tamanho %d\n", fim-ini, t);
       




        free(v);

        printf("\n\nEscolha o novo tamanho do vetor (0 encerra): ");
        scanf("%d", &t);
    }
}