#include <stdio.h>

int main(){

    int i;
    for(i=0; i<256; i++){
        printf("\t%3d : %c", i, i);
    }

    return 0;
}