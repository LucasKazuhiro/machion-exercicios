#include <stdio.h>
#include <stdbool.h>

int main(){


    printf("\n\n");


    int numero=0, count=0;
    bool flagTriangular=false;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for(int i=0; i<=numero; i++){
        count = count + i;

        if(count == numero){
             flagTriangular = true;
            break;
        }

        if(count > numero){
            flagTriangular = false;
            break;
        }
    }


    if(flagTriangular){
        printf("CORRETO::> Eh um Numero Triangular!!");
    }
    else{
        printf("ERRADO::> Nue eh um Numero Triangular!!");
    }


    printf("\n\n");

    return 0;
}