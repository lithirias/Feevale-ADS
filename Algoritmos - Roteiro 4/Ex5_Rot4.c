/*
Exercício 5
Uma escola de idiomas tem como critério de aprovação em um módulo
que a média do aluno seja maior ou igual a 7,0 e que seu número de faltas
não ultrapasse a 25% das aulas. A média é calculada a partir da média aritmética
das duas melhores notas de três notas recebidas durante o módulo.
Assim, faça um programa em C que calcule e exiba a porcentagem de alunos:
-aprovados,-reprovados por nota,-reprovados por falta,
a partir da leitura dos seguintes dados: quantidade de alunos no módulo,
quantidade de aulas do módulo, as três notas de cada aluno, a quantidade de faltas de cada aluno.
Lembre-se de garantir que os dados lidos estejam adequados ao problema.
*/

#include <stdio.h>

int main(){
    int aulas, faltas;
    float alunos, nmr1, nmr2, nmr3, media, reprova_faltas = 0, reprova_notas = 0, aprova = 0;

    do{
        printf("\nDigite a quantidade de alunos e aulas ministradas: ");
        scanf("%f%d", &alunos, &aulas);
    }while(alunos <= 0 || aulas <= 0);

    for(int i = 0; i < alunos; i++){
        do{
            printf("Digite as tres notas do aluno %d: ", i+1);
            scanf("%f%f%f", &nmr1, &nmr2, &nmr3);
        }while((nmr1 > 10 || nmr1 < 0) || (nmr2 > 10 || nmr2 < 0) || (nmr3 > 10 || nmr3 < 0));

        if (nmr1 < nmr2 && nmr1 < nmr3)
            media = (nmr2+nmr3)/2;
        else
            if(nmr2 < nmr1 && nmr2 < nmr3)
                media = (nmr1+nmr3)/2;
            else
                media = (nmr1+nmr2)/2;

        if (media >= 7){
            do{
                printf("\nDigite o numero de faltas do aluno %d: ", i+1);
                scanf("%d", &faltas);
            }while(faltas < 0 && faltas > aulas);

            if ((faltas / aulas) > 0.25){
                reprova_faltas++;
            }
            else
                aprova++;
        }
        else
            reprova_notas++;
    }

    printf("\nAlunos aprovados: %.2f%%", (aprova/alunos)*100);
    printf("\nAlunos reprovados por nota: %.2f%%", (reprova_notas/alunos)*100);
    printf("\nAlunos reprovador por falta: %.2f%%", (reprova_faltas/alunos)*100);
}