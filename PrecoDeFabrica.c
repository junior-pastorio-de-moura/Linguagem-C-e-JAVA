#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int sf, comi, n, sfinal, x;
    sf = 1200;
    comi = 50;
    printf("Digite o n�mero de carros vendidos no m�s: ");
    scanf("%d", &n);
    x = n*comi;
    sfinal = sf+x;
    printf("COMISS�O: R$;%d,00\n", x);
    printf("Sal�rio final: R$; %d\n", sfinal);
    system("pause");
    return 0;
}
