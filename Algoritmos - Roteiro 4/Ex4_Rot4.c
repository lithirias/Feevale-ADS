/*
Exercício 4

Proponha um programa em C que leia um número inteiro positivo e
em seguida exiba n linhas do chamado Triângulo de Floyd, conforme exemplificado abaixo:

n = 3
1
23
456
*/

#include <stdio.h>

int main(){
    int nmr, k = 1;

    do{
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &nmr);
    }while(nmr <= 0);

    for (int j = 1; j <= nmr; j++){
        for(int i = 0; i < j; i++){
            printf("%d", k);
            k++;
        }
        printf("\n");
    }
}