#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<math.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    float dollar;
    int qnt, reais;
    printf("Digite a cota��o do d�llar: ");
    scanf("%f", &dollar);
    printf("Digite quantos d�llares voc� tem: ");
    scanf("%i", &qnt);
    reais = dollar*qnt;
    printf("Voc� possui %i,00 reais\n\n", reais);

    system("pause");
    return 0;
}
