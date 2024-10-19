#include <stdio.h>
#include <string.h>


int main(){

    char A[5], B[20];
    int tamanhoA, tamanhoB, i=0, k=0, repetiu=0;

    printf("Digite a cadeia de caracteres A: ");
    scanf(" %4[^\n]s", A);
    tamanhoA = strlen(A);

    printf("Digite a cadeia de caracteres B: ");
    scanf(" %19[^\n]s", B);
    tamanhoB = strlen(B);

    if(tamanhoA > tamanhoB){
        return 0;
    }

    for(i=0; i<tamanhoB; i++){
        if(B[i] == A[k]){
            if(k == tamanhoA-1){
                repetiu++;
                k=0;
            }
            else{
                k++;
            }
        }
        else{
            k=0;
        }
    }


    printf("Palavra A: %s\n", A);
    printf("Palavra B: %s\n", B);
    printf("O 'A' repetiu %d veze(s) em B", repetiu);



    return 0;
}