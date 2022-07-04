#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<locale.h>

void informacoes(){
    printf("MENU: \nDigite: \n");
    printf("1- Para descobrir a area do circulo;\n");
    printf("2- Para descobrir o raio do circulo; \n");
}


int main(){
    float pi = 3.1415;
    float area, raio, x;
    int op;
    printf("Área do circulo: \n\n");
    informacoes();
    scanf("%i", &op);
    if(op == 1){
        system("cls");
        printf("FORMULA: area = (raio*raio)*pi\n");
        printf("CALCULO DA AREA DO CIRCULO: \n\n");
        printf("Digite o raio: ");
        scanf("%f", &raio);
        area = (raio*raio)*pi;
        printf("RESULTADO: %.2f \n", area);
    } else if(op == 2){
        system("cls");
        printf("FORMULA: raio = sqrt(PIxArea)\n");
        printf("CALCULO DO RAIO DO CIRCULO: \n\n");
        printf("Digite a area: ");
        scanf("%f", &area);
        x = pi*area;
        raio = sqrt(x);
        printf("RESULTADO: %.2f \n", raio);
    } else printf("Valor não corresponde a nenhuma das opcoes!\n");

    system("pause");
    return 0;
}