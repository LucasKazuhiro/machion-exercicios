#include <stdio.h>
#include <stdlib.h>
#include <time.h>




typedef struct{
    int dia, mes, ano;
} t_data;


int valida_data(t_data data){
    if (data.dia < 1 || data.mes < 1 || data.mes > 12 || data.ano < 1900 || data.ano > 2024){
        return 0;
    }

    switch(data.mes){
        case 4:
        case 6:
        case 9:
        case 11:
            if(data.dia > 30){
                return 0;
            }
            break;

        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if(data.dia > 31){
                return 0;
            }
            break;

        case 2:
            if(data.dia > 28){
                return 0;
            }
            break;
    }

    return 1;
}

t_data le_data(){
    t_data data;

    
    int valida;
    do{
        printf("Digite o dia: ");
        scanf("%d", &data.dia);

        printf("Digite o mes: ");
        scanf("%d", &data.mes);

        printf("Digite o ano: ");
        scanf("%d", &data.ano);

       
        valida = valida_data(data);

        if(!valida){
            printf("\nData Invalida!!!\n\n\n");
        }

    } while(!valida);
    

    return data;
};


void mostra_data(t_data d1){
    printf("%02d/%02d/%d", d1.dia, d1.mes, d1.ano);
}


int * le_vetor(int t){
    int *v = (int *) malloc (t * sizeof(int));

    //int v[t];

    for(int i=0; i<t; i++){
        printf("vetor[%d]: ", i);
        scanf("%d", &v[i]);
    }

    return v;
}


t_data data_seguinte(t_data data){
    switch(data.mes){
        case 4:
        case 6:
        case 9:
        case 11:
            if(data.dia >= 30){
                data.dia = 1;
                data.mes++;
            }
            else{
                data.dia++;
            }
            break;

        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
            if(data.dia >= 31){
                data.dia = 1;
                data.mes++;
            }
            else{
                data.dia++;
            }
            break;

        case 2:
             if(data.dia >= 28){
                data.dia = 1;
                data.mes++;
            }
            else{
                data.dia++;
            }
            break;

        case 12:
            if(data.dia >= 31){
                data.dia = 1;
                data.mes = 1;
                data.ano++;
            }
            else{
                data.dia++;
            }
            break;
    }

    return data;
}


int * gera_vetor(int t){
    int *v = (int *) malloc (t * sizeof(int));

    for(int i=0; i<t; i++){
        v[i] = rand();
    }

    return v;
}


void mostra_vetor(int *v, int t){
    printf("Endereco do vetor: %p\n", v);

    // for(int i=0; i<t; i++){
    //     printf("%d ", v[i]);
    // }
}


int main(){
    srand(time(0));

    t_data d1, d2;

    d1 = le_data();
    mostra_data(d1);

    d1 = data_seguinte(d1);
    printf("\n");
    mostra_data(d1);
    // printf("\n\n");

    // d2 = le_data();
    // mostra_data(d2);
    // printf("\n\n");



    


    // Criar vetor
    // int t;

    // printf("\nEscolha o tamanho do vetor, 0 encerra: ");
    // scanf("%d", &t);

    // while(t>0){
    //     int * v = gera_vetor(t);
    //     mostra_vetor(v, t);
    //     free(v);
    //     printf("\n\n");

    //     printf("Escolha o tamanho do vetor, 0 encerra: ");
    //     scanf("%d", &t);
    // }

    return 0;
}
