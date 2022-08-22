#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<string.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int dia, mes, i=0;
    while(i==0){
        printf("Digite o dia do seu aniverssário: ");
        scanf("%i", &dia);
        printf("Digite o mês do seu aniverssário: ");
        scanf("%i", &mes);
        if(dia>30 || dia<=0){
            printf("Dia inválido!\n");
        } else if(mes>12 || mes<=0){
            printf("Mês inválido!\n");
        } else{
            i=9;
        }
    }
    printf("A data está ok!\n");
    switch(mes){
        case 1 : printf("O mês que você digitou corresponde a Janeiro!\n"); break;
        case 2 : printf("O mês que você digitou corresponde a Fevereiro!\n"); break;
        case 3 : printf("O mês que você digitou corresponde a Março!\n"); break;
        case 4 : printf("O mês que você digitou corresponde a Abril!\n"); break;
        case 5 : printf("O mês que você digitou corresponde a Maio!\n"); break;
        case 6 : printf("O mês que você digitou corresponde a Junho!\n"); break;
        case 7 : printf("O mês que você digitou corresponde a Julho!\n"); break;
        case 8 : printf("O mês que você digitou corresponde a Agosto!\n"); break;
        case 9 : printf("O mês que você digitou corresponde a Setembro!\n"); break;
        case 10 : printf("O mês que você digitou corresponde a Outubro!\n"); break;
        case 11 : printf("O mês que você digitou corresponde a Novembro!\n"); break;
        default : printf("O mês que você digitou corresponde a Dezembro!\n");
    }

    system("pause");
    return 0;
}
