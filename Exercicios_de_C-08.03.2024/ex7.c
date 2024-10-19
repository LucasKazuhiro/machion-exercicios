#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    char palavraUm[20], palavraDois[20];
    int lenUm, lenDois, i;
    bool flagDiferente = false;


    printf("Informe a primeira palavra: ");
    scanf("%s", palavraUm);
    lenUm = strlen(palavraUm);
    printf("Informe a segunda palavra: ");
    scanf("%s", palavraDois);
    lenDois = strlen(palavraDois);


    if(lenUm != lenDois){
       printf("DIFERENTES!!");
    }
    else{
        for(i=0; i<strlen(palavraUm); i++){
            if(palavraUm[i] != palavraDois[i]){
                //printf("%c %c\n", palavraUm[i], palavraDois[i]);
                //printf("teste");
                flagDiferente = true;
                break;
            }
        }

        if(flagDiferente){
            printf("DIFERENTES");
        }
        else{
            printf("IGUAIS!!");
        }
    }


    return 0;
}