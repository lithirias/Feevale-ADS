/*
Escreva um algoritmo em C que a partir de 2 inteiros informados pelo usuário,
identifique qual o maior valor entre eles e o exibe seguido das palavras “valor maior“.
Caso os números sejam iguais, exiba a mensagem “valores iguais”.
*/

#include <stdio.h>

int main(){
    int nmr1, nmr2;

    printf("Digite dois numeros inteiros: ");
    scanf("%d%d", &nmr1, &nmr2);

    if(nmr1 > nmr2){
        printf("\n%d valor maior", nmr1);
    }
    else{
        if(nmr1 < nmr2){
        printf("\n%d valor maior", nmr2);
        }
        else{
        printf("\nValores iguais");
        }
    }
    
}