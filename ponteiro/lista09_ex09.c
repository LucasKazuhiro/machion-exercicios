// Crie um programa que contenha uma matriz de float contendo 3 linhas
// e 3 colunas. Imprima o endereço de cada posição dessa matriz.

#include <stdio.h>
#include <stdlib.h>
#define T 3

int main(){

    float matriz[T][T] = {{1,2,3},{4,5,6},{7,8,9}};
    float **p;
    int count=0;


    printf("\n\n\n\n");


    printf("  Alocacao Estatica (mostra endereco usando &matriz[i][j]):\n\n");
    for(int i=0; i<T; i++){
        for(int j=0; j<T; j++){
            printf("%9X ", &matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n\n\n\n");








    /*
        A variavel 'matriz' é basicamente um conjunto de vetores, portanto podemos dizer que ela é um Vetor composta por vetores. 
        Nesse caso (matriz 3 por 3), ela possui TRÊS VETORES, onde cada vetor possui 3 SLOTS. Algo como:

           < GRANDE VETOR ( limitado por {...} ) CONTENDO TODOS VETORES >
        {   {1,2,3}     {4,5,6}     {7,8,9}           {a,b,c}   {d,f,g}   }     
            vetor 1     vetor 2     vetor 3         vetor fora da matriz 
                                                    (ou seja, estouro)

        Que organizado "normalmente" ficaria:
                    { 1, 2, 3 }
                    { 4, 5, 6 }
                    { 7, 8, 9 }
                    { a, b, c }     <== IGNORAR VETOR - util para o exemplo usando 'sizeof(float)'
                    { d, f, g }     <== IGNORAR VETOR - util para o exemplo usando 'sizeof(float)'



        Quando usamos 'matriz', como no código 'printf("%9X ", matriz+1)', esse 'matriz' a principio se refere ao
        ENDEREÇO DA POSIÇÃO INICIAL da matriz, isto é, matriz[0][0], o que não está exatamente errado.
        Se imprimirmos o endereço representado por 'matriz', realmente irá mostrar o endereço a primeira posição da matriz,
        no nosso caso, o endereço do número 1.

        No entando, ao adicionarmos '+1' aparentemente "andamos uma linha para frente". Ou seja, se usarmos 'matriz + 1',
        mostrariamos o endereço do número 4, e não do número 2. Isso porque 'matriz' 'está no nivel' dos conjunto de vetores, logo
        no caso onde somamos +1 a 'matriz' seria o equivalente a avançar 1 posição no vetor de vetores, dessa forma, selecionariamos
        a primeria posição do vetor 2, por isso o endereço do número 4 é apresentado. Adicionar +1 avança um vetor e não uma posição!
            OBS: É possive imaginar que 'matriz' se refere ao endereço de um vetor (e não de uma posição do vetor), então ao adicionar +1,
                 você avançaria para o endereço do vetor seguinte, por exemplo, indo do vetor 1 para o vetor 2.

        Pra resolver esse problema podemos dicionar um 'asterisco' (*) na frente de 'matriz'. Esse asterisco 'desce o nivel' ao qual
        'matriz' se refere. Se antes ela se referia ao 'endereço de um vetor', agora ela se refere a um endereço de um elemento de um vetor especifico.
        Dessa forma 'printf("%9X ", *matriz+1)' pegaria 'matriz' (que é a primeira posição de um vetor) e adicionaria +1. Por conta do '*'
        agora matriz se refere aos endereços dos elemento em si do vetor (e não ao endereço de um vetor completo), 
        desse modo adicionar +1 andaria uma posição a frente. O endereço apresentado seria o endereço do número 2!

        Se adicionar '*' desceu o nivel de endereço do vetor para o endereço do elemento de um vetor, adicionar '**' (dois asteriscos) 
        mostra o valor presente no elemento do vetor (mais especifico ainda que somente o endereço do elemento de um vetor), isto é, 'desce o nivel novamente'. 
        Portanto 'printf("%f ", **matriz+2)' imprimiria o valor '3.00000' e não o endereço do número 3.




        ALGUNS EXEMPLOS PRÁTICOS:

        printf("%9X ", matriz);                     <== Imprime o endereço de matriz[0][0] (ou seja, 1º posição da 1º linha)
        printf("%9X ", *matriz);                    <== Imprime o endereço de matriz[0][0] (ou seja, 1º posição da 1º linha)
        printf("%9X ", matriz + 1);                 <== Imprime o endereço de matriz[1][0] (ou sej  a, 1º posição da 2º linha)
        printf("%9X ", *matriz + 1);                <== Imprime o endereço de matriz[0][1] (ou seja, 2º posição da 1º linha)
        printf("%9X ", *(matriz + 1) + 1);          <== Imprime o endereço de matriz[1][1] (ou seja, 2º posição da 2º linha)
        printf("%9X ", *matriz + 1 + 1);            <== Imprime o endereço de matriz[0][2] (ou seja, 3º posição da 1º linha)
        printf("%f ", **matriz + 1);                <== Imprime o VALOR contido em matriz[0][1] (ou seja, 2º posição da 1º linha)
        printf("%f ", **(matriz + 2) + 1);          <== Imprime o VALOR contido em matriz[2][1] (ou seja, 2º posição da 3º linha)
        printf("%f ", **matriz + 2 + 1);            <== Imprime o VALOR contido em matriz[1][0] (ou seja, 1º posição da 2º linha)
        printf("%9X ", matriz + 1*sizeof(float))    <== Imprime o endereço de matriz[4][0] (ou seja, 1º posição da 5º linha, não existe quinta linha)
                                                            Como o sizeof(float) vale 4 e não estamos usando '*', portanto a 'matriz' está no nivel de
                                                            endereço de vetores (e não no nivel de endereço de posição de vetores), o código entenderá
                                                            que deve-se avançar 4 vetores (equivalente a dizer 4 linhas). Poranto será selecionado o
                                                            endereço da letra 'd'.            
    */

    printf("  Alocacao Estatica (mostra endereco usando * e soma):\n\n");
    for(int i=0; i<T*T; i++){
        printf("%9X ", *matriz + i);

        if(count==2){
            printf("\n");
            count=0;
        }
        else{
            count++;
        }
    }

    printf("\n\n\n\n");



    




    printf("  Alocacao Dinamica (mostra endereco usando &p[i][j]):\n\n");
    p = (float **) malloc (3 * sizeof(float *));
    for(int i=0; i<T; i++){
        p[i] = (float *) malloc (3 * sizeof(float));
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%9X ", &p[i][j]);
        }
        printf("\n");
    }

    printf("\n\n\n\n");



    return 0;
}