#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include<string.h>

int main() {
    //Potenciação
    /*system("clear");
    double x[1];
    printf("Digite um valor que deseja elevar ao quadrado: ");
    scanf("%lf", &x[0]);
    printf("\nO valor que voce digitou e: %.2lf\n", x[0]);
    x[1] = pow(x[0],2);
    printf("\n%.2lf elevado ao quadrado e: %.2lf\n", x[0], x[1]);*/
    system("clear");
    double potencia = 0;
    int x = 5;
    potencia = pow(x,2);
    printf("Valor de %.2lf ao quadrado %.wf\n", x, potencia);

    return 0;
}