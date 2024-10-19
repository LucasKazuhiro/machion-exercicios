#include <stdio.h>

int main(){

    int valorAno = 0;

    printf("\n\n");

    printf("Insira o Ano para verificar se ele eh Bissexto: ");
    scanf("%d", &valorAno);

    printf("\n");

    if(valorAno % 400 == 0){
        printf("O ano %d eh Bissexto", valorAno);
    }
    else if((valorAno % 4 == 0) && (valorAno % 100 != 0)){
        printf("O ano %d eh Bissexto", valorAno);
    }
    else{
        printf("O ano %d nue Bissexto", valorAno);
    }


    return 0;
}