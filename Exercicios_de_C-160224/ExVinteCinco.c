#include <stdio.h>
#include <math.h>

int main(){

    // Variaveis
    float valor_A = 0, valor_B = 0, valor_C = 0;
    float valor_Delta = 0;
    float raiz_Real_Um = 0, raiz_Real_Dois = 0;
    

    printf("\n\n");

    // Informando valores
    printf("Insira valor de A: ");
    scanf("%f", &valor_A);

    printf("Insira valor de B: ");
    scanf("%f", &valor_B);

    printf("Insira valor de C: ");
    scanf("%f", &valor_C);


    // Valor de A nao pode ser 0
    if(valor_A != 0){
        // Calculando Delta
        valor_Delta = pow(valor_B, 2) - (4 * valor_A * valor_C);


        if(valor_Delta < 0){
            printf("\nNao existe raiz!");

        }
        else if(valor_Delta == 0){
            valor_Delta = sqrt(valor_Delta);
            raiz_Real_Um = (-valor_B) / (2 * valor_A);
            printf("\nValor da Raiz Unica: %.2f", raiz_Real_Um);

        }
        else if(valor_Delta >= 0){
            valor_Delta = sqrt(valor_Delta);
            raiz_Real_Um = ((-valor_B) + valor_Delta) / (2 * valor_A);
            raiz_Real_Dois = ((-valor_B) - valor_Delta) / (2 * valor_A);
            printf("\nPrimeira Raiz: %.2f\n", raiz_Real_Um);
            printf("Segunda Raiz: %.2f", raiz_Real_Dois);

        }
    }
    else{
        printf("\nNue equacao de segundo grau!");
    }


    printf("\n\n");

    return 0;
}