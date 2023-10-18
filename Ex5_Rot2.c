#include <stdio.h>
#include <math.h>

int main(){
    float nmr;

    printf("Digite um numero: ");
    scanf("%f",&nmr);

    printf("\nQuadrado: %.2f", pow(nmr, 2));
    printf("\nDobro: %.2f", nmr*2);
    printf("\nTriplo: %.2f", nmr*3);
    printf("\nMetade: %.2f", nmr/2);

    return 0;
}