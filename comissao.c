#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int sf, comi, n, sfinal, x;
    sf = 1200;
    comi = 50;
    printf("Digite o número de carros vendidos no mês: ");
    scanf("%d", &n);
    x = n*comi;
    sfinal = sf+x;
    printf("COMISSÃO: R$;%d,00\n", x);
    printf("Salário final: R$; %d\n", sfinal);
    system("pause");
    return 0;
}
