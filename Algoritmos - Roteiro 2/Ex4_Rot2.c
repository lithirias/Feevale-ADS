#include <stdio.h>

int main(){
    int nmr;

    printf("Digite um numero: ");
    scanf("%d",&nmr);

    printf("\n3%% do numero: %.2f", nmr*0.03);
    printf("\n30%% do numero: %.2f", nmr*0.3);
    printf("\n130%% do numero: %.2f", nmr*1.3);

    return 0;
}