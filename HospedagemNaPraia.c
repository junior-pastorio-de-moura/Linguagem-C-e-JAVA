#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>    
#include <locale.h>
#include<conio.h>
#include<time.h>

void menu(){
    printf("Tipo de Apartamento\tValor da Diaria\n");
    printf("1 - Individual \t\tR$ 125\n");
    printf("2 - Suite Dupla\t\tR$ 140\n");
    printf("3 - Suite Tripla\tR$ 180\n\n");
}

int individual(int dia){
    int total, desc, Ntotal;
    if (dia < 3)
    {
        if (dia == 2)
        {
           total = dia*125;
            printf("Total R$ %d,00\n", total);
        } else if(dia == 1){
            total = dia*125;
            printf("Total R$ %d,00\n", total);
        }
    } else if(dia > 3){
        total = dia*125;
        desc = total*0.15;
        Ntotal = total - desc;
        printf("Desconto de 15%%, R$ %d,00 de desconto.\n", desc);
        printf("Total a pagar R$ %d,00\n", Ntotal);
    } else{
        printf("Numero de dias invalido!\n");
    }
}

int dupla(int dia){
    int total, desc, Ntotal;
    if (dia < 3)
    {
        if (dia == 2)
        {
           total = dia*140;
            printf("Total R$ %d,00\n", total);
        } else if(dia == 1){
            total = dia*140;
            printf("Total R$ %d,00\n", total);
        }
    } else if(dia > 3){
        total = dia*140;
        desc = total*0.15;
        Ntotal = total - desc;
        printf("Desconto de 15%%, R$ %d,00 de desconto.\n", desc);
        printf("Total a pagar R$ %d,00\n", Ntotal);
    } else{
        printf("Numero de dias invalido!\n");
    }
}

int tripla(int dia){
    int total, desc, Ntotal;
    if (dia < 3)
    {
        if (dia == 2)
        {
           total = dia*180;
            printf("Total R$ %d,00\n", total);
        } else if(dia == 1){
            total = dia*180;
            printf("Total R$ %d,00\n", total);
        }
    } else if(dia > 3){
        total = dia*180;
        desc = total*0.15;
        Ntotal = total - desc;
        printf("Desconto de 15%%, R$ %d,00 de desconto.\n", desc);
        printf("Total a pagar R$ %d,00\n", Ntotal);
    } else{
        printf("Numero de dias invalido!\n");
    }
}

int main(){
    int op, n;
    menu();
    printf("Selecione o tipo de apartamento: ");
    scanf("%d", &op);
    if (op == 1)
    {
        printf("Digite o numero de dias: ");
        scanf("%d", &n);
        individual(n);
    } else if(op == 2){
        printf("Digite o numero de dias: ");
        scanf("%d", &n);
        dupla(n);
    } else if(op == 3){
        printf("Digite o numero de dias: ");
        scanf("%d", &n);
        tripla(n);
    } else printf("opcao invalida!\n\n");
    

    system("pause");
    return 0;
}