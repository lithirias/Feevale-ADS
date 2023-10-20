#include <stdio.h>

int main(){
    int nmr;
    printf("Digite um inteiro: ");
    scanf("%d",&nmr);

    printf("O numero lido foi %d\n", nmr);
    printf("Seu antecessor eh %d\n", nmr-1);
    printf("E seu sucessor eh %d\n", nmr+1);

    getchar();
    return 0;
}