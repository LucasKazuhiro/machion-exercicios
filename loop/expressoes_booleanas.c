#include <stdio.h>

int main(){
    int a = 0;

    if(a){
        printf("a eh Verdadeiro\n");
    }
    else{
        printf("a eh Falso\n");
    }

    printf("%d\n", a > 0);
    printf("%d\n", !a);

    return 0;
}