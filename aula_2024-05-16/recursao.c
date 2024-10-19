#include <stdio.h>

int factorial(int n){
    //printf("n = %d\n", n);

    if(n<=1){
        return 1;
    } 
    return n * factorial(n-1);
}

int fibonacci(int n){
    if(n<=1){
        return 1;
    }

    return fibonacci(n-1) + fibonacci(n-2);
}

int soma_1_a_n (int n){
    if(n>0){
        return n + soma_1_a_n(n-1);
    }

    return 0;
}

// Fibonacci Exemplo
/*
                            5
                            |
                 4          +         3
                 |                    |
            3    +    2          2    +    *1
            |         |          |
          2 + *1   *1 + *0    *1 + *0
          |
       *1 + *0


    *Todos os 1's e 0's retornam o valor de '1'.
    Portanto no exemplo acima, o valor retornado é 8.
*/


int potencia(int k, int n){
    if (n == 0){
        return 1;
    }

    return k * potencia(k, n-1);
}

int multiplicacao(int n1, int n2){
    if(n2 == 1){
        return n1;
    }
    return n1 + multiplicacao(n1, n2 - 1);
}

void exibir_vetor_1(int i, int tam, int v[]){
    if(i < tam){
        printf("%d ", v[i]);
        exibir_vetor_1(i+1, tam, v);
    }
}

void exibir_vetor_2(int n, int v[]){
    if(n>0){
        exibir_vetor_2(n-1, v);
    }
    printf("%d ", v[n]);
}

void exibir_vetor_3(int n, int v[]){
    if(n>=0){
        printf("%d ", v[n]);
        exibir_vetor_3(n-1, v);
    }
}


int main(){
    printf("\n\n\n\n\n");



    for(int i=0; i<=12; i++){
        printf("Fatorial de %2d = %d\n", i, factorial(i));
    }

    printf("\n\n");

    for(int i=1; i<15; i++){
        printf("Fibonacci no termo %2d = %d\n", i, fibonacci(i));
    }


    printf("\n\n\n\n");
    printf("Soma 1 a 10: %d\n", soma_1_a_n(10));
    printf("A potencia de 2^4 eh igual a %d\n", potencia(2,4));
    printf("A multiplicacao entre 3 e 7 eh igual a %d\n", multiplicacao(3,7));



    printf("\n\n\n\n");
    printf("Imprimindo Vetores: \n");
    int v[7] = {1, 2, 3, 4, 5, 6, 7};

    printf("\nForma Um:\n");
    exibir_vetor_1(0, 7, v);

    printf("\n\nForma Dois:\n");
    exibir_vetor_2(7-1, v);

    printf("\n\nForma Tres:\n");
    exibir_vetor_3(7-1, v);





    printf("\n\n\n\n\n");
    return 0;
}