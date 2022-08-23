#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int dia, mes, ano, dtjuliana, x;
    printf("Digite o dia do mes: ");
    scanf("%d", &dia);
    printf("Digite o mes do ano: ");
    scanf("%d", &mes);
    printf("Digite o ano: ");
    scanf("%d", &ano);
    dtjuliana = (1461*(ano + 4800+(mes - 14)/12))/4+(367*(mes - 2 - 12*((mes - 14)/12)))/12 - (3*((ano + 4900+(mes - 14)/12)/100))/4 + dia - 32075;

    x = dtjuliana % 7;

    switch(x){
        case 0 : printf("Segunda-feira!\n"); break;
        case 1 : printf("Terça-feira!\n"); break;
        case 2 : printf("Quarta-feira!\n"); break;
        case 3 : printf("Quinta-feira!\n"); break;
        case 4 : printf("Sexta-feira!\n"); break;
        case 5 : printf("Sábado!\n"); break;
        default : printf("Domingo! \n");
    }
    system("pause");
    return 0;
}
