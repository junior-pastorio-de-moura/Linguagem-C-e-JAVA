#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<math.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    float gaso, valor, gasto;
    int consumo, Dist;
    printf("Digite o pre�o atual da gasolina: ");
    scanf("%f", &gaso);
    printf("Digite o consumo do seu carro: ");
    scanf("%i", &consumo);
    printf("Quantos quil�metros voc� ir� percorrer: ");
    scanf("%i", &Dist);

    valor = Dist/consumo;
    gasto = valor*gaso;

    printf("Voc� vai gastar R$:%.2f,00 para percorrer essa dist�ncia.\n\n", gasto);
    system("pause");
    return 0;
}
