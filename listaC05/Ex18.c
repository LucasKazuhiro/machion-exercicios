#include <stdio.h>

int main(){

    char L1, L2, palavra[20], c;
    int count=0;


    printf("Quero trocar a letra: ");
    scanf(" %c", &L1);

    printf("Pela letra: ");
    scanf(" %c", &L2);

    printf("\n");

    getchar();

    printf("Digite uma palavra: ");
    while((c=getchar()) != '\n' && c != EOF && count<20){
        palavra[count] = c;

        if(palavra[count] == L1){
            palavra[count] = L2;
        }

        count++;
    }

    palavra[count] = '\0';

    printf("\n\n");
    printf("%s", palavra);



    return 0;
}