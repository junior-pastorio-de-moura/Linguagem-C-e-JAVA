#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>    
#include <locale.h>
#include<conio.h>
#include<time.h>

int CalculaMulta(int x){
    int Km, multa;
    if (x > 50 && x <= 55)
    {
        printf("Velocidade excedida!\n Multa de R$ 230,00\n");
    } else if(x > 55 && x <= 60){
        printf("Velocidade excedida!\n Multa de R$ 340,00\n");
    } else if(x > 60){
        multa = 19.28*(x - 50);
        printf("Acima dos 60km voce recebe multa por Km/h a mais.\n");
        printf("Multa: R$%d,00\n", multa);
    } else printf("Está dentro da velocidade permitida!\n");
}

int main(){
    int vel;
    printf("Digite a velocidade do condutor(em Km): ");
    scanf("%d", &vel);
    CalculaMulta(vel);
    system("pause");
    return 0;
}