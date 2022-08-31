#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>    
#include <locale.h>
#include<conio.h>
#include<time.h>

int estacaoAno(int x, int y){

    if ((x >= 21 && y == 9) || (y == 10 || y == 11) || (x <= 20 && y == 12))
    {
        printf("Primavera!\n");
    } else if((y == 12 && x >= 21) || (y >= 1 && y <= 2) || (x <= 20 && y == 3)){
        printf("Verao!\n");
    } else if((x >= 21 && y == 3) || (y > 3 && y <= 5) || (x <= 20 && y == 6)){
        printf("Outono!\n");
    } else printf("Inverno!\n");
}

int main(){
    int dia, mes;
    int x = 5;
    while (x == 5)
    {
        printf("Digite o dia: ");
        scanf("%d", &dia);   
        if (dia > 31 || dia < 1)
        {
            system("cls");
            printf("ERRO!\n");
            printf("O valor digitado nao corresponde a um dia do mes!\n");
        } else {
            x = 9;
        }
    }
    x = 5;
    while (x == 5)
    {
        printf("Digite o mes: ");
        scanf("%d", &mes);   
        if (mes > 12 || mes < 1)
        {
            system("cls");
            printf("ERRO!\n");
            printf("O valor digitado nao corresponde a um mes do ano!\n");
        } else{
            x = 9;
        }
    }
    estacaoAno(dia,mes);
    system("pause");
    return 0;
}