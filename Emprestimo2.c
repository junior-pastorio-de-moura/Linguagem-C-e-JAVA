#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int sal, inss, irrf, desc, salF, emp, x, juros, y;
    printf("Digite o sal�rio bruto do funcion�rio: ");
    scanf("%i", &sal);

    inss = sal * 0.08;
    irrf = sal * 0.03;
    desc = inss + irrf;
    salF = sal - desc;
    printf("O sal�rio l�quido do seu funcion�rio � R$; %i,00\n", salF);
    printf("Digite o valor do em pr�stimo que voc� deseja fazer: ");
    scanf("%i", &x);
    emp = (salF *0.3)*72;
    if(x > emp){
        printf("N�o � poss�vel pegar um empr�stimo no valor que voc� digitou!\n");
        printf("O valor m�ximo de empr�stimo que voc� pode pegar � R$;%i,00\n", emp);
        y = (emp/72)*0.04;
        juros = (emp/72) + y;
        printf("E voc� pode fazer em at� 72x de R$;%i,00\n", juros);
    }

    system("pause");
    return 0;
}
