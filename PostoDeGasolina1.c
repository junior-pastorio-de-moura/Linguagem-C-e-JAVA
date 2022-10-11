#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<math.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    float gaso = 5.37, valor;
    int qnt;
    printf("Valor do litro da gasolina comum R$: %.2f\n", gaso);
    printf("Digite quantos litros você quer abastecer: ");
    scanf("%i", &qnt);
    valor = qnt*gaso;
    printf("Você gastará R$: %.2f\n", valor);

    system("pause");
    return 0;
}
