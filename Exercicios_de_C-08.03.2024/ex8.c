#include <stdio.h>
#include <string.h>

int main(){

    char palavra[20];
    int count=0;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    for(int i=0; i<strlen(palavra); i++){
        if(palavra[i] == '1'){
            count++;
        }
    }

    printf("A quantidade de 1's existentes eh: %d", count);
   
    return 0;
}