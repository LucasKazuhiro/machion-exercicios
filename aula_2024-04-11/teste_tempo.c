#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <limits.h>

int main(){

    int i, count = 0;

    // while(count != 1){
    //     printf("%lu\n", time(0));
    //     Sleep(1000);
    // }

    printf("%lu\n", time(0));
    for(i=0; i<LONG_MAX; i++);
    printf("%lu\n", time(0));
    for(i=0; i<LONG_MAX; i++);
    printf("%lu\n", time(0));
    for(i=0; i<LONG_MAX; i++);
    printf("%lu\n", time(0));
    for(i=0; i<LONG_MAX; i++);
    printf("%lu\n", time(0));

    return 0;
}