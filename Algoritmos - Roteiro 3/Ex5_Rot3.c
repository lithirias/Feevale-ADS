/*
Elabore um algoritmo em C que, uma vez que o usuário informe a idade de um atleta,
o programa o classifique em uma das modalidades a seguir dos jogos da primavera:

Infantil A = 6 a 8 anos
Infantil B = 9 a 12 anos
Juvenil A = 13 a 14 anos
Juvenil B = 15 a 18 anos

Pessoas com menos de 6 anos ou maiores de 18 anos não podem participar da competição.
*/

#include <stdio.h>

int main(){
    int nmr;
    do{
        printf("Digite a idade do atleta (6 a 18 anos): ");
        scanf("%d", &nmr);
    }while(nmr <= 6 || nmr >= 18);
    
    switch (nmr){
    case 6:
    case 7:
    case 8:
        printf("\nModalidade Infantil A");
        break;
    case 9:
    case 10:
    case 11:
    case 12:
        printf("\nModalidade Infantil B");
        break;
    case 13:
    case 14:
        printf("\nModalidade Juvenil A");
        break;
    case 15:
    case 16:
    case 17:
    case 18:
        printf("\nModalidade Juvenil B");
    }
}