#include <stdio.h>

int main(){

    char c;
    int count=0;

    printf("\n\n\nDigite uma frase: ");
    while((c = getchar()) != '\n' && c != EOF){
        if(c == ' '){
            count++;
        }
    }

    printf("\n\nExistem %d espacos em branco\n\n", count);

    return 0;
}