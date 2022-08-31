#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>    
#include <locale.h>
#include<conio.h>
#include<time.h>

int x = 5;

int estacaoAno(int z, int y){

    if ((z >= 21 && y == 9) || (y == 10 || y == 11) || (z <= 20 && y == 12))
    {
        printf("Primavera!\n");
    } else if((y == 12 && z >= 21) || (y >= 1 && y <= 2) || (z <= 20 && y == 3)){
        printf("Verao!\n");
    } else if((z >= 21 && y == 3) || (y > 3 && y <= 5) || (z <= 20 && y == 6)){
        printf("Outono!\n");
    } else printf("Inverno!\n");
}

int leiadia(){
    int dia;
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
    return dia;
}

int leiames(){
    int mes;
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
    x = 5;
    return mes;
}

int main(){
    int D, M;
    int op, g = 2;
    while (g == 2)
    {
        D = leiadia();
        M = leiames();
        estacaoAno(D,M);
        printf("Deseja ver outro data?(1 -Sim/ qualquer valor - Nao): ");
        scanf("%d", &op);
        if (op == 1)
        {
            system("cls");
        } else
        {
            g = 9;
        }
    }   
    system("pause");
    return 0;
}