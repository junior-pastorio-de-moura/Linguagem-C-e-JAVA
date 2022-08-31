#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int sal, inss, irrf, desc, salF, emp, x, juros, y;
    printf("Digite o salário bruto do funcionário: ");
    scanf("%i", &sal);

    inss = sal * 0.08;
    irrf = sal * 0.03;
    desc = inss + irrf;
    salF = sal - desc;
    printf("O salário líquido do seu funcionário é R$; %i,00\n", salF);
    printf("Digite o valor do em préstimo que você deseja fazer: ");
    scanf("%i", &x);
    emp = (salF *0.3)*72;
    if(x > emp){
        printf("Não é possível pegar um empréstimo no valor que você digitou!\n");
        printf("O valor máximo de empréstimo que você pode pegar é R$;%i,00\n", emp);
        y = (emp/72)*0.04;
        juros = (emp/72) + y;
        printf("E você pode fazer em até 72x de R$;%i,00\n", juros);
    }

    system("pause");
    return 0;
}
