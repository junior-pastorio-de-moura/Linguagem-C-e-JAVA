#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    float sal, rea, x[2], total;
    printf("Digite o salário do funcionário: ");
    scanf("%f", &sal);
    printf("Digite o percentual de reajuste: ");
    scanf("%f", &rea);
    x[1] = rea/100;
    x[2] = x[1]*sal;
    total = x[2] + sal;
    printf("Valor do reajuste R$: %.0f\n", x[2]);
    printf("Novo salário R$: %.0f", total);

    system("pause");
    return 0;
}
