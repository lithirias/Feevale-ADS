#include <stdio.h>

int main(){
    float nmr1, nmr2;

    printf("Digite o primeiro numero: ");
    scanf("%f",&nmr1);
    printf("\nDigite o segundo numero: ");
    scanf("%f",&nmr2);

    printf("\nSoma: %.2f\n", nmr1+nmr2);
    printf("\nProduto: %.2f\n", nmr1*nmr2);
    printf("\nDiferenca: %.2f\n", nmr1-nmr2);

    return 0;
}