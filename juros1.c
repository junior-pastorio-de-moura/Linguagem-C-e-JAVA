#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<math.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int v, M;
    float j = 0.09, juros;
    printf("Deposite um valor: ");
    scanf("%i", &v);
    juros = v*j;
    M = juros+v;
    printf("JUROS R$: %.2f\n\n", juros);
    printf("O valor que você depositou, a um juros\n ");
    printf("de 0,9%%, em um mês de rendimento gerou\n ");
    printf("um montante de R$: %i,00", M);

    system("pause");
    return 0;
}
