/*
Escreva um algoritmo em C que leia 3 números inteiros diferentes,
e depois apresente a soma, o produto, o menor e o maior desses números.
*/

#include <stdio.h>

int main(){
    int nmr1, nmr2, nmr3;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &nmr1);

    printf("\nDigite o segundo numero inteiro: ");
    scanf("%d", &nmr2);

    while (nmr2 == nmr1)
    {
        printf("\nNumero repetido. Digite novamente: ");
        scanf("%d", &nmr2);
    }

    
    printf("\nDigite o terceiro numero inteiro: ");
    scanf("%d", &nmr3);

    while (nmr3 == nmr1 || nmr3 == nmr2)
    {
        printf("\nNumero repetido. Digite novamente: ");
        scanf("%d", &nmr3);
    }

    printf("\nA soma dos numeros eh %d", nmr1+nmr2+nmr3);
    printf("\nO produto dos numeros eh %d", nmr1*nmr2*nmr3);

    if (nmr1 > nmr2 && nmr1 > nmr3)
        printf("\n%d maior valor", nmr1);
    else{
        if (nmr2 > nmr1 && nmr2 > nmr3)
            printf("\n%d maior valor", nmr2);
        else
            printf("\n%d maior valor", nmr3);
    }

    if (nmr1 < nmr2 && nmr1 < nmr3)
        printf("\n%d menor valor", nmr1);
    else{
        if (nmr2 < nmr1 && nmr2 < nmr3)
            printf("\n%d menor valor", nmr2);
        else
            printf("\n%d menor valor", nmr3);
    }
}