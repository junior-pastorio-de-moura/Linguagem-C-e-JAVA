#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//MERCEARIA DO AMBRÓSIO
/*
regras pra desconto(desconto de 15%): 1 - qnt de produtos >= 15
2 - Valor total da compra >= 40
*/
void menu(){
    printf("Codigo  Preço Unitario\n");
    printf("1        R$ 5,30\n");
    printf("2        R$ 6,00\n");
    printf("4        R$ 3,20\n");
    printf("5        R$ 2,50\n\n");
}

int prog(int cdg){
    float total, desc, v;
    int qnt;
    switch (cdg)
    {
    case 1:
        printf("Digite a quantidade: ");
        scanf("%d", &qnt);
        total = qnt*5.3;
        if(qnt >= 15 || total >= 40){
            desc = total * 0.15;
            printf("Desconto de 15%%\n");
            v = total + desc;
            printf("Valor a ser pago: R$: %.2f", v);
            return v;
        } else{
            printf("Valor a ser pago: R$: %.2f", total);
            return total;
        }
        break;
    case 2:
        printf("Digite a quantidade: ");
        scanf("%d", &qnt);
        total = qnt*6;
        if(qnt >= 15 || total >= 40){
            desc = total * 0.15;
            printf("Desconto de 15%%\n");
            v = total + desc;
            printf("Valor a ser pago: R$: %.2f", v);
            return v;
        } else{
            printf("Valor a ser pago: R$: %.2f", total);
            return total;
        }
        break;
        case 3:
        printf("Digite a quantidade: ");
        scanf("%d", &qnt);
        total = qnt*3.2;
        if(qnt >= 15 || total >= 40){
            desc = total * 0.15;
            printf("Desconto de 15%%\n");
            v = total + desc;
            printf("Valor a ser pago: R$: %.2f", v);
            return v;
        } else{
            printf("Valor a ser pago: R$: %.2f", total);
            return total;
        }
        break;
        case 4:
        printf("Digite a quantidade: ");
        scanf("%d", &qnt);
        total = qnt*2.5;
        if(qnt >= 15 || total >= 40){
            desc = total * 0.15;
            printf("Desconto de 15%%\n");
            v = total + desc;
            printf("Valor a ser pago: R$: %.2f", v);
            return v;
        } else{
            printf("Valor a ser pago: R$: %.2f", total);
            return total;
        }
        break;
    }
}

int main(){
    int codigo;
    menu();
    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);
    prog(codigo);
    return 0;
}