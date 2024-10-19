#include <stdio.h>

int main(){


    int tamanhoVetor = 10;
    int numeros[tamanhoVetor], pares[tamanhoVetor], impares[tamanhoVetor];
    int contador_Par=0, contador_Impar=0;


    for(int i=0; i<tamanhoVetor; i++){
        printf("Insira um numero no vetor [%d]: ", i+1);
        scanf("%d", &numeros[i]);

        if(numeros[i] % 2 == 0){
            pares[contador_Par] = numeros[i];
            contador_Par++;
        }
        else{
            impares[contador_Impar] = numeros[i];
            contador_Impar++;
        }
    }


    printf("\n\nTodos numeros:\n");
    for(int i=0; i<tamanhoVetor; i++){
        printf("%d ", numeros[i]);
    }

    printf("\n\nNumeros pares:\n");
    for(int i=0; i<contador_Par; i++){
        printf("%d ", pares[i]);
    }

    printf("\n\nNumeros impares:\n");
    for(int i=0; i<contador_Impar; i++){
        printf("%d ", impares[i]);
    }


    return 0;
}