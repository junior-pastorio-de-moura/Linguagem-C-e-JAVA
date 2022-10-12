#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int op, i=0, litro, desc, x[2], total, valor;
    printf("----POSTO----\n");
    printf("1 - GASOLINA;\n2 - ALCOOL;\n");
    while(i==0){
        printf("Escolha uma das opçoes: ");
        scanf("%i", &op);
        if(op<=0 || op>2){
            printf("ERRO!");
            printf("So existe opçao 1 e 2!\n");
        } else{
            i = 8;
        }
    }
        if(op==1){
        printf("Opçao escolhida: GASOLINA;\n");
        printf("Quantos litros irá abastecer? ");
        scanf("%i", &litro);
        x[1] = 5.37; //Preço da gasolina.
        if(litro<=20){
            total = x[1]*litro;
            desc = total*0.03;
            printf("Desconto: R$;%i,00\n", desc);
            valor = total - desc;
            printf("Valor a ser pago: R$;%i,00\n", valor);
        } else{
            total = x[1]*litro;
            desc = total*0.05;
            printf("Desconto: R$;%i,00\n", desc);
            valor = total - desc;
            printf("Valor a ser pago: R$;%i,00\n", valor);
        }

    } else{
        printf("Opçao escolhida: ALCOOL;\n");
        printf("Quantos litros ira abastecer? ");
        scanf("%i", &litro);
        x[1] = 3.89; //Preço do Alcool.
        if(litro<=20){
            total = x[1]*litro;
            desc = total*0.04;
            printf("Desconto: R$;%i,00\n", desc);
            valor = total - desc;
            printf("Valor a ser pago: R$;%i,00\n", valor);
        } else{
            total = x[1]*litro;
            desc = total*0.06;
            printf("Desconto: R$;%i,00\n", desc);
            valor = total - desc;
            printf("Valor a ser pago: R$;%i,00\n", valor);
        }
    }
    system("pause");
    return 0;
}
