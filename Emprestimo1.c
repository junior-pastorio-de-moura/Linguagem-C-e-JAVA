#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int sal, inss, irrf, total, x[3], emprestimo;

    printf("Digite o salário do cliente, R$;");
    scanf("%d", &sal);
    inss = sal*0.05;
    irrf = sal*0.08;
    printf("DESCONTOS:\n");
    printf("IRRF: %d\n", irrf);
    printf("INSS: %d\n", inss);
    total = sal - (inss+irrf);
    printf("Salário líquido, R$; %i,00\n", total);
    x[1] = total*0.3;
    emprestimo = x[1]*72;
    printf("Empréstimo disponível:\n R$;%i,00\n", emprestimo);

    system("pause");
    return 0;
}
