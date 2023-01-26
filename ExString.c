#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(void){
    /*
    Criar um código que pede pro usuário digitar um nome e um sobrenome,
    mas que manda o usuário digitar de novo se o nome e sobrenome forem
    iguais
    */
    int x = 0;
    int i = 0;
    while (i == 0)
    {
        char nome[25] = "";
        char sobrenome[25] = "";
        fflush(stdin);
        int compara;
        printf("Digite seu nome: ");
        fgets(nome, 25, stdin);
        printf("Digite seu sobrenome: ");
        fgets(sobrenome, 25, stdin);
        system("clear");
        compara = strcmp(nome, sobrenome);
        if (compara == 0)
        {
            printf("O nome e o sobrenome estão iguais!\n");
            x++;
            if (x == 3)
            {
                printf("Acabaram o número de tentativas..\n\n CONTA BLOQUEADA!!\n");
                i++;
            }
            
        }   
    }   
    return 0;
}