/*
Exercício 1
Proponha um algoritmo em C que peça ao usuário que digite 2 números,
obtenha esses dois valores, calcule e exiba: a soma, o produto, a diferença e a divisão.
*/

#include <stdio.h>

int main(){
    float nmr1, nmr2;

    printf("Digite dois numeros: ");
    scanf("%f%f", &nmr1, &nmr2);

    printf("\nA soma eh %.2f", nmr1+nmr2);
    printf("\nO produto eh %f", nmr1*nmr2);
    printf("\nA diferenca eh %f", nmr1-nmr2);
    printf("\nA divisao eh %.2f", nmr1/nmr2);
}