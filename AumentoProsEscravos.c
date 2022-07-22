#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int sal, aum, x;
    printf("ORGANIZAÇÕS TABAJARA\n\n");
    printf("Digite o salário do colaborador: ");
    scanf("%i", &sal);
    if(sal<=280){
        aum = sal*0.2;
        printf("Aumento de 20%%!\n");
    } else if(sal>280 && sal<=700){
        aum = sal*0.15;
        printf("Aumento de 15%%!\n");
    } else if(sal>700 && sal<=1500){
        aum = sal*0.1;
        printf("Aumento de 10%%!\n");
    } else{
        aum = sal*0.05;
        printf("Aumento de 5%%!\n");
    }
    printf("Percentual de aumento aplicado: %R$;%i,00\n", aum);
    x = sal + aum;
    printf("Novo salário: R$;%i,00\n", x);
    system("pause");
    return 0;
}
