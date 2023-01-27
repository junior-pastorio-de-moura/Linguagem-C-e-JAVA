#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(void){
    float soma = 0;
    float valor;
    int opcao;

    do{
        printf("\nMENU DE OPÇÕES\n");
        printf("\n 1. Depósito");
        printf("\n 2. Saque");
        printf("\n 3. Saldo");
        printf("\n 4. Sair");

        printf("\nInforme uma opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("\nInforme o valor: ");
            scanf("%f", &valor);
            soma += valor;
            break;
        case 2:
            printf("\nInforme o valor: ");
            scanf("%f", &valor);
            soma -= valor;
            break;
        case 3:
            printf("\nSaldo atual = R$ %.2f", soma); 
            break;
        case 4:
            printf("\nSaindo...");
            break;
        default:
            printf("\nOpção inválida!");
            break;
        }
    } while(opcao != 4);
    printf("\nFim das operações!");
    return 0;
}