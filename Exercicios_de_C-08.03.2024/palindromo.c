#include <stdio.h>
#include <stdbool.h>

int main(){

    char palavra[20];
    int i, ida=0, volta;
    bool naoPalindromo=false;

    printf("Informe uma palavra: ");
    scanf("%19[^\n]s", palavra);

    for(i=0; palavra[i] != '\0'; i++);

    volta=i-1;
   
    for(int ida=0; ida!=volta; ida++, volta--){
        if(palavra[ida] == palavra[volta]){
        }
        else{
            naoPalindromo=true;
        }
    }
    

    if(naoPalindromo){
        printf("Nao eh palindromo");
    }
    else{
        printf("Eh palindromo");
    }


    return 0;
}