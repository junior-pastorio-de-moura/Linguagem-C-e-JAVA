#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<math.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    float dollar;
    int qnt, reais;
    printf("Digite a cotação do dóllar: ");
    scanf("%f", &dollar);
    printf("Digite quantos dóllares você tem: ");
    scanf("%i", &qnt);
    reais = dollar*qnt;
    printf("Você possui %i,00 reais\n\n", reais);

    system("pause");
    return 0;
}
