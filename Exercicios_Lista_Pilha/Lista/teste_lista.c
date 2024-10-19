#include "lista.h"

int main(){
    printf("\n\n\n\n\n");

    t_lista lista;
    inicializa_lista(&lista);

    insere_inicio(5, &lista);
    insere_inicio(20, &lista);
    insere_inicio(100, &lista);




    // Teste do Exercicio 13
    printf("Exercicio 13:\n\n");
    printf("A media dos valores da lista eh %.2f", media_lista(lista));



    // Teste do Exercicio 16
    printf("\n\n\n\n\nExercicio 16:\n\n");
    t_lista lista_dois;
    inicializa_lista(&lista_dois);

               //  Destino    Origem
    copiar_lista(&lista_dois, lista);

    printf("Lista Um (origem):\n");
    mostra_lista(lista);
    printf("\n");
    printf("Lista Dois (destino):\n");
    mostra_lista(lista_dois);



    // Teste do Exercicio 21
    printf("\n\n\n\n\nExercicio 21:\n\n");
    t_lista lista_vetor;
    inicializa_lista(&lista_vetor);
    
    int valores[] = {1, 2, 3, 4, 5};
    int tam_vetor = sizeof(valores) / sizeof(valores[0]);

    vetor_para_lista(&lista_vetor, valores, tam_vetor);

    printf("Vetor: ");
    for(int i=0; i<tam_vetor; i++){
        printf("%d ", valores[i]);
    }
    printf("\n\nLista Encadeada: ");
    mostra_lista(lista_vetor);



    // Teste do Exercicio 24
    printf("\n\n\n\n\nExercicio 24:\n\n");
    t_lista lista_tres;
    inicializa_lista(&lista_tres);
    insere_inicio(5, &lista_tres);
    insere_inicio(20, &lista_tres);
    insere_inicio(110, &lista_tres);
    insere_inicio(200, &lista_tres);

    t_lista lista_quatro;
    inicializa_lista(&lista_quatro);


    printf("Comparando Lista 1 e Lista 2: ");
    comparar_lista(lista, lista_dois);

    printf("Lista Um:\n");
    mostra_lista(lista);
    printf("\n");
    printf("Lista Dois:\n");
    mostra_lista(lista_dois);


    printf("\n\n\nComparando Lista 1 e Lista 3: ");
    comparar_lista(lista, lista_tres);

    printf("Lista Um:\n");
    mostra_lista(lista);
    printf("\n");
    printf("Lista Tres:\n");
    mostra_lista(lista_tres);


    printf("\n\n\nComparando Lista 1 e Lista 4: ");
    comparar_lista(lista, lista_quatro);

    printf("Lista Um:\n");
    mostra_lista(lista);
    printf("\n");
    printf("Lista Quatro:\n");
    mostra_lista(lista_quatro);




    printf("\n\n\n\n\n");
    
    return 0;
}
