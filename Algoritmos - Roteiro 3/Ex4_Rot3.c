/*
Proponha um algoritmo em C para calcular a nota de um candidato em um concurso.
Para isso, você deve ler as três notas do candidato entre 0 e 10.
Em seguida, calcule a nota final dele no concurso, a qual corresponde à média ponderada,
considerando que a primeira nota tem peso 2, a segunda tem peso 3 e a terceira tem peso 5.
Exibir uma mensagem dizendo qual a média do aluno e se ele foi aprovado ou reprovado.
A média para aprovação é 7.
*/

#include <stdio.h>

int main(){
    float nmr1, nmr2, nmr3;

    do{
        printf("Digite a primeira nota: ");
        scanf("%f", &nmr1);
    } while (nmr1 < 0 || nmr1 > 10);
    
    do{
        printf("Digite a primeira nota: ");
        scanf("%f", &nmr2);
    } while (nmr2 < 0 || nmr2 > 10);

    do{
        printf("Digite a primeira nota: ");
        scanf("%f", &nmr3);
    } while (nmr3 < 0 || nmr3 > 10);

    float media = (nmr1*2 + nmr2*3 + nmr3*5) / (2+3+5);

    if(media >= 7)
        printf("\nMedia eh %.2f. Aluno aprovado!", media);
    else
        printf("\nMedia eh %.2f. Aluno reprovado!", media);
}