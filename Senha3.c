#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>    
#include <locale.h>
#include<time.h>
#include<conio.h>

int main(){
    long int senha, senhaC;
    int  x = 5, y = 5;
    while (x == 5)
    {
        printf("Digite sua senha de 8 digitos: ");
        scanf("%d", &senha);   
        if (senha < 10000000)
        {
            system("cls");
            printf("ERRO!\n");
            printf("Sua senha nao deve ter menos de 8 digitos!\n");
        } else
        {
            x = 9;
        }
    }
    system("cls");
    while (y == 5)
    {
        printf("Confirme sua senha: ");
        scanf("%d", &senhaC);
        if (senha != senhaC)
        {
            system("cls");
            printf("ERRO!\n");
            printf("Senhas diferentes!\n");
        } else
        {
            y = 9;
        }
    }
    printf("Cadastro completo!\n");
    system("pause");   
    return 0;
}
/*
Criar um programa de senha, em que o usuário digita e confirma a sua senha, onde
o programa fica insistindo para receber a senha e ou a confirmação da senha caso o 
usuário digite errado, o programa não pode permitir senhas menores ou maiores de 8
dígitos.
Depois disso, deve perguntar se o usuário que entrar, daí ele solicito o acesso e o
programa pede a senha, se ele errar mais de 3 vezes, a conta é bloqueada, e o programa
deve mostra a quantidade de veses que ele pode tentar.
*/