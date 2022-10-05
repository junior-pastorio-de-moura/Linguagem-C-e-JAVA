#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<math.h>

int inicio, fim, op;

int comandos(){
    int u = 5, p = 5, r = 5;
    while (r == 5)
    {
        while (u == 5)
    {
        printf("Digite um numero de inicio: ");
        scanf("%d", &inicio);
        if(inicio <= 0){
            printf("ERRO!\n");
            printf("Nao pode ser digitado numero negativo ou zero!\n");
        } else{
            u = 7;
        }
    }
    while (p == 5)
    {
        printf("Digite um numero de fim: ");
        scanf("%d", &fim);
        if(fim <= 0){
            printf("ERRO!\n");
            printf("Nao pode ser digitado numero negativo ou zero!\n");
        } else{
            p = 7;
        }
    }

    if(inicio == fim){
        printf("ERRO!\n");
        printf("Os numeros de inicio e fim nao podem ser iguais\n");
        printf("pois assim nao havera intervalo!\n\n");
        u = 5;
        p = 5;
    } else if(inicio > fim){
        printf("ERRO!\n");
        printf("O numero de inicio deve ser menor que o de fim,\n");
        printf("para que o intervalo possa ocorrer!\n\n");
        u = 5;
        p = 5;
    } else{
        printf("Intervalo OK!\n\n");
        r = 7;
    }

    }
}
void informa(){
    printf("MENU DE OPCOES:\n");
    printf("1 - Mostrar todos os valores do intervalo;\n");
    printf("2 - Mostrar todos os numeros pares do intervalo;\n");
    printf("3 - Mostrar os numeros primos do intervalo;\n");
}
int opcao(){
    int z = 5;
    printf("\n\n");
    while (z == 5)
    {
        printf("Escolha uma das opcoes: ");
        scanf("%d", &op);
        if((op == 1)||(op == 2)||(op == 3)){
            printf("Opcao escolhida: %i\n", op);
            z = 7; 
        } else{
            printf("OPCAO INVALIDA!\n");
            printf("So existe 3  opcoes!\n");
        }
    }
    return op;
} 

int main(){
    comandos();
    informa();
    opcao(op);
    if(op == 1){
        for(; inicio <= fim; inicio++){
            printf("%i\n", inicio);
        }
    } else if(op == 2){
         for(; inicio <= fim; inicio++){
            if(inicio % 2 == 0){
                printf("%i\n", inicio);
            }
        }
    } else{
        for(; inicio <= fim; inicio++){
                if((inicio == 2)||(inicio == 3)||(inicio == 5)||(inicio == 7)){
                    printf("%i\n", inicio);
                } else if((inicio % 2 == 0)||(inicio % 3 == 0)||(inicio % 5 == 0)||(inicio % 7 == 0)){
                    //Se for divisível por qualquer número acima, ele não é primo.
                } else{
                    printf("%i\n", inicio);
                }

            }
        }
        system("pause");
        return 0;
    }