#include <stdio.h>
#include <math.h>
#include <stdbool.h>


int main(){

    int valorM=0, valorN=0;
    int valorA, valorB, valorC;
    bool breakLoop=false;


    /*  !! -- !! INSTRUCTIONS !! -- !!

        Theorem of Pythagoras's formula
        a^2 + b^2 = c^2

        Final goal
        a + b + c = 1000

        Euclid's Formula - Generate Pythagorean Triples
        m^2 - n^2 + 2nm + n^2 + m^2 = 1000
        2m^2 + 2mn = 1000
        m^2 + mn = 500
        m(m+n) = 500
        m+n = 500 / m       <<-- Final formula to find 'a + b + c = 1000'     

        ** m and n have opposite parity, therefore if one is ODD, the other must be EVEN.

        Formula Source¹ = { https://en.wikipedia.org/wiki/Pythagorean_triple#Generating_a_triple }
        Formula Source² = { https://blog.dreamshire.com/generating-pythagorean-triples/ }
        Formula Source³ = { https://www.adrian.idv.hk/2012-08-09-euclid/#:~:text=Euclid's%20formula%20says%20that%2C%20(%20a,m%2Cn%20m%2Cn. }

        a = 2mn
        b = m^2 - n^2
        c = m^2 + n^2

        ** Exchange the value of 'a' to 'b' (in the original formula), as 'a' must be LOWER than 'b'.
        
    */


    for(int n=1; n<500; n++){
        for(int m=n+1; m<500; m++){
            if(n%2==1 && m%2==1){
                continue;
            }
            else if(n%2==0 && m%2==0){
                continue;
            }
            else{
                if(m+n == 500.0/m){
                    valorM = m;
                    valorN = n;

                    breakLoop = true;
                    break;
                }
            }
        }

        if(breakLoop){
            break;
        }
    }


    valorA = 2 * valorM * valorN;
    valorB = pow(valorM,2) - pow(valorN,2);
    valorC = pow(valorM,2) + pow(valorN,2);


    printf("\n\n");
    printf("a^2 + b^2 = c^2\n");
    printf("%d^2 + %d^2 = %d^2\n", valorA, valorB, valorC);
    printf("%.0f + %.0f = %.0f\n", pow(valorA,2), pow(valorB,2), pow(valorC,2));
    printf("%.0f = %.0f\n\n", pow(valorA,2) + pow(valorB,2), pow(valorC,2));

    printf("a + b + c = 1000\n");
    printf("%d + %d + %d = %d\n\n", valorA, valorB, valorC, valorA+valorB+valorC);
    


    return 0;
}