#include "no.h"

int main(){
    printf("\n\n\n\n\n");

    t_no no1, no2;

    no1.info = 10;
    no2.info = 20;
    no1.proximo = &no2;

    printf("no1.info = %d\n", no1.info);
    printf("no1.proximo = %p\n\n", no1.proximo);
    printf("no1.proximo->info = %d\n", no1.proximo->info);
    printf("no1.proximo->info = %d", (*no1.proximo).info);



    t_no * p_no = constroi_no(30);
    printf("p_no: %p\n\n", *p_no);

    p_no->proximo = &no1;
    printf("Endereco do no1 %p\n", p_no->proximo);

    no2.proximo = p_no;

    printf("\n\n\n\n\n");
    
    return 0;
}