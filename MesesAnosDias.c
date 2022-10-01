#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int dia, mes, anos, x[3];
    printf("Digite a sua idade em meses, anos e dias!\n");
    printf("Digite os anos: ");
    scanf("%i", &anos);
    printf("Digite os meses: ");
    scanf("%i", &mes);
    printf("Digite os dias: ");
    scanf("%i", &dia);

    x[1] = anos*365;
    x[2] = mes*30;
    x[3] = (x[1] + x[2] + dia);
    printf("Sua idade em dias é %i\n", x[3]);
    system("pause");
    return 0;
}
