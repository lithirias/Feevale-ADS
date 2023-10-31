/*
Exercício 1

Proponha um programa em C que lê uma variável n, inteira e maior que zero,
que representa o número de linhas da figura que segue o padrão a seguir:

n= 5
*****
*****
*****
*****
*****
*/

#include <stdio.h>

int main(){
    int nmr;
    do{
        printf("Digite a quantidade de linhas: ");
        scanf("%d", &nmr);
    }while(nmr <= 0);

    for(int j=0; j < nmr; j++){
        for(int i=0; i < 5; i++){
            printf("*");
        }
        printf("\n");
    }
}