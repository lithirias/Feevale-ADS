#include <stdio.h>
#include <math.h>

int main(){
    int nmr;

    printf("Digite um numero: ");
    scanf("%d", &nmr);
    nmr = pow(nmr, 2);
    printf("\nQuadrado: %d", nmr);

    return 0;
}