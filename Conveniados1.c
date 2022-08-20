#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int d, x, v[4];
    x = 100;
    char nome[1];
    printf("Digite o nome do conveniado: ");
    scanf("%s", nome);
    //printf("%s\n", nome);
    printf("Digite a idade do conveniado: ");
    scanf("%i", &d);
    if(d<10){
        v[1] = 80;
        x = x + v[1];
        printf("O valor do convênio de %s é R$; %d,00\n", nome, x);
    } else if(d>=10 && d<=30){
        v[2] = 50;
        x = x + v[2];
        printf("O valor do convênio de %s é R$; %d,00\n", nome, x);
    } else if(d>30 && d<=60){
        v[3] = 95;
        x = x + v[3];
        printf("O valor do convênio de %s é R$; %d,00\n", nome, x);
    }else {
        v[4] = 130;
        x = x + v[4];
        printf("O valor do convênio de %s é R$; %d,00\n", nome, x);
    }

    system("pause");
    return 0;
}
