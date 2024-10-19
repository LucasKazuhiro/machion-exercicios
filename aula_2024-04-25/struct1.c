#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct data{
    int dia, mes, ano; 
};

struct outra_data{
    int dia, mes, ano;
};

typedef struct{
    char nome[40];
    int ano_nascimento;
} pessoa;


typedef struct dia{
    int numero;
    char dia_semana[40];
} t_dia_semana;


int main(){
    struct data d1, d2;

    d1.dia = 25;
    d1.mes = 04;
    d1.ano = 2024;
    printf("Data 1: %d/%d/%d\n\n", d1.dia, d1.mes, d1.ano);

    d2 = d1;
    printf("Data 2: %d/%d/%d\n\n", d2.dia, d2.mes, d2.ano);

    d2.dia = 30;
    printf("Data 1: %d/%d/%d\n", d1.dia, d1.mes, d1.ano);
    printf("Data 2: %d/%d/%d\n\n", d2.dia, d2.mes, d2.ano);



    /*
        Dara EERO. Mesmo possuindo os mesmo atributos, são, no fim, tipos diferentes.
        Um é do tipo "data" e e o outro é do tipo "outra_data"      
    */
    // struct outra_data d3;
    // d3 = d1;



    pessoa p;
    printf("\n\n\n\nDigite o nome da pessoa: ");
    scanf("%s", p.nome);

    printf("Digite o ano de nascimento: ");
    scanf("%d", &p.ano_nascimento);


    printf("\n%s nasceu em %d.\n", p.nome, p.ano_nascimento);



    t_dia_semana ds;

    /*
        typedef struct dia{
        int numero;
        char *dia_semana;       <=== tirar o '[40]' o colocar o '*' na frente de 'dia_semana'
    } t_dia_semana;
    

        Dessa forma um ponteiro sera criado, no entanto ainda será necesário
        alocar (fazer o ponteiro apontar para) um vetor dinamico: 
        
        ds.dia_semana = (char *) malloc (40 * sizeof(char));
    */

    ds.numero = p.ano_nascimento;
    // ds.dia_semana = p.nome;      <== Impossivel copiar uma string para outra variavel do tipo string!!
    strcpy(ds.dia_semana, p.nome);

    printf("ds.numero = %d\nds.dia_semana = %s\n", ds.numero, ds.dia_semana);





    struct data *pd;
    pd = (struct data *) malloc (sizeof (struct data));

    pd->dia = 25;
    pd->mes = 12;
    pd->ano = 2024;

    printf("\n\n\nHo ho Ho: %d/%d/%d\n", pd->dia, pd->mes, pd->ano);


    return 0;
}