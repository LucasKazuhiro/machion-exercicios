#include <stdio.h>
#include <stdlib.h>

int main(){

    unsigned int count=0;
    int *v = (int *) malloc (200000000 * sizeof(int));

    while(v != NULL){
        printf("%d\n", ++count);
        v = (int *) malloc(200000000 * sizeof(int));
    } 

    return 0;
}