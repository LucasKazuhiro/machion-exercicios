#include <stdio.h>


int main(){

    printf("\n\n\n");

    char c, alterado[50];
    int count=0;

    printf("Frase para usar o codigo de Cesar: ");
    while((c = getchar()) != '\n' && c != EOF && count < 50 - 1){
        switch(c){
            case 'X':
            case 'x':
            case 'Y':
            case 'y':
            case 'Z':
            case 'z':
                c -= 23;
                break;

            case ' ':
                break;
            
            default:
                c += 3;
        }

        alterado[count++] = c;
    }

    alterado[count] = '\0';

    printf("\nFrase alterada: %s", alterado);


    printf("\n\n\n");
    
    return 0;
}