#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>    
#include <locale.h>
#include<conio.h>
#include<time.h>

int main(){
    char op;
    int qnt = 1;
    float valor, soma, media;
    for (int i = 5; i == 5;)
    {
        printf("Digite o valor da mercadoria R$; ");
        scanf("%f", &valor);
        qnt++;
        printf("Mais mercadorias(S/N)? ");
        setbuf(stdin, NULL);
        scanf("%c", &op);
        if (op == 's' || op == 'S')
        {
            system("cls");
        } else if(op == 'n' || op == 'N'){
            printf("ENCERRADO!\n");
            i = 7;
        } else{
            printf("Valor invalido!\nNao corresponde a sim ou nao!\n\n");
        }
        soma = soma + valor;
    }
    media = soma/qnt;
    printf("Valor total em estoque R$; %.2f\n", soma);
    printf("Media dos valores das mercadorias R$; %.2f\n", media);
    system("pause");
    return 0;
}