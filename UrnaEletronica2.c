#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<locale.h>

void menu(){
    printf("==== MENU ==== \n");
    printf("1 - Para 3 candidatos; \n");
    printf("2 - Para 5 candidatos; \n");
}

int main (){
    menu();
    int op, x, y;
    int num[y];
    char nome[12];
    printf("Escolha uma das opcoes para a urna eletronica. \n");     
    scanf("%d", &op);
    if (op ==1)
    {
        x == 3;
    } else if (op == 2)
    {
        x == 5;   
    } else printf("Opcao invalida.\n");
    
    for (int i = 1; i <= x; i++)
    {
        printf("Nome do candidato: ");
        fgets(nome, 12, stdin);
        printf("Numero do candidato: ");
        scanf("%d", &num[y]);    
    }


    system("pause");
    return 0;
}