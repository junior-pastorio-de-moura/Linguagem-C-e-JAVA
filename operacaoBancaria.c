#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int mostrar(void){
    printf("\n\n======Banco Central======\n\n");    
    printf("Digite (1) para Saldo,\n (2) para Extrato,\n (3) para Saque\n (4) para depositar\n");
    printf(" e (5) para Sair\n");
}

int main(void){
    int n = 0, x = 0;
    float dinheiro = 3000.00;
    float saque = 0, deposito = 0;

    while (x == 0)
    {

        mostrar();

        printf("Informe a operação desejada: ");
        scanf("%d", &n);
        if (n == 1)
        {
            system("clear");
            printf("Saldo atual: %.2f\n", dinheiro);
        }
        else if(n == 2)
        {
            system("clear");
            printf("01/01/2010 \t Saldo anterior: \t\t R$: 300,00;\n");
            printf("15/02/2010 \t Pagamento Fornecedores: \t R$: 700,00;\n");
            printf("22/03/2010 \t Pagamento conta corrente: \t R$: 2000,00;\n");
            printf("22/03/2010 \t Saldo atual: \t\t\t R$: 3000,00;\n\n");
        }
        else if(n == 3)
        {
            system("clear");
            printf("Quanto deseja sacar R$: ");
            scanf("%f", &saque);
            dinheiro -= saque;
        }
        else if(n == 4)
        {
            printf("Quanto deseja depositar? R$: ");
            scanf("%f", &deposito);
            dinheiro += deposito;
        }
        else if(n == 5)
        {
            printf("Operação finalizada!\n");
        }
        else if(n > 5 || n < 1)
        {
            printf("Valor inválido!\n");
        } 
        x = 1;

    }
    
    return 0;
}