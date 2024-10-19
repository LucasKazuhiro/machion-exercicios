#include <stdio.h>

int main(){

    char palavra[50], c;
    int count=0;

    printf("Digite uma palavra: ");
    while((c=getchar()) != '\n' && c != EOF && count < 50){
        palavra[count] = c;

        palavra[count] += 1;

        count++;
    }

    palavra[count] = '\0';


    printf("%s", palavra);

    return 0;
}