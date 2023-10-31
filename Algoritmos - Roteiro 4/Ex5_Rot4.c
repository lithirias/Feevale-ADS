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
    int alunos, aulas, faltas, reprova_faltas = 0;
    float nmr1, nmr2, nmr3;

    do{
        printf("\nDigite a quantidade de alunos e aulas ministradas: ");
        scanf("%d%d", &alunos, &aulas);
    }while(alunos <= 0 || aulas <= 0);

    for(int i = 0; i < alunos; i++){
        

        do{
            printf("\nDigite o numero de faltas do aluno %d: ", i+1);
            scanf("%d", &faltas);
        }while(faltas >= 0 && faltas <= aulas);

        if ((faltas / aulas) > 0.25){
            reprova_faltas++;
        }
    }
}