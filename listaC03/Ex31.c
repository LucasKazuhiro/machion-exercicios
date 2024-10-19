#include <stdio.h>

int main(){

    double cimaNumerador=1, baixoDenominador=1, soma=0;


    for(int i=1; i<=50; i++){
        soma = soma + (cimaNumerador / baixoDenominador);

        cimaNumerador += 2;
        baixoDenominador++;
    }
    
    printf("S = %.5f\n", soma);


   
    return 0;
}