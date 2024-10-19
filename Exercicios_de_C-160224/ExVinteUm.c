#include <stdio.h>
#include <stdbool.h>


int main(){

    float primeiroNum = 0;
    float segundoNum = 0;
    int operacao = 0;
    float resultado = 0;
    bool blockFlag = false;

    printf("\n\n");

    printf("Defina o primeiro numero: ");
    scanf("%f", &primeiroNum);

    printf("Defina o segundo numero: ");
    scanf("%f", &segundoNum);

    printf("\n\n1 = Soma\n2 = Subtracao (maior pelo menos)\n3 = Multiplicacao\n4 = Divisao");
    printf("\nEscolha um operacao: ");
    scanf("%d", &operacao);

    if(operacao == 1){
        resultado = primeiroNum + segundoNum;
    }
    else if(operacao == 2){
        if(primeiroNum > segundoNum){
            resultado = primeiroNum - segundoNum;
        }
        else{
            resultado = segundoNum - primeiroNum;
        }
    }
    else if(operacao == 3){
        resultado = primeiroNum * segundoNum;
    }
    else if(operacao == 4){
        if(segundoNum != 0){
            resultado = primeiroNum / segundoNum;
        }
        else{
            printf("\nImpossivel efetuar divisao com denominador 0");
            blockFlag = true;
        }
    }
    else{
        printf("\nOperacao Invalida!");
        blockFlag = true;
    }




    if(!blockFlag){
        printf("\nO operacao entre %.2f e %.2f resultou em %.2f", primeiroNum, segundoNum, resultado);
    }
        

    return 0;
}