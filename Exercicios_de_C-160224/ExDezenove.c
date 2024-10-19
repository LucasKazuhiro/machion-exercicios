#include <stdio.h>

int main(){

    int numero = 0;

    printf("\n\n");

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("\n");


    if(!(numero % 3) && !(numero % 5)){
        printf("ERRO: O numero %d EH divisivel por 3 E 5!", numero);
    }
    else if(!(numero % 3)){
       printf("SUCESSO: O numero %d EH divisivel por 3", numero);
    }
    else if (!(numero % 5)){
        printf("SUCESSSO: O numero %d EH divisivel por 5", numero);
    }
    else{
        printf("ERRO: O numero %d NUE divisivel por 3 ou 5!", numero);
    }


    return 0;
}