#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int A, B, C;

    printf("Digite um valor para A: ");
    scanf("%d", &A);
    printf("Digite um valor para B: ");
    scanf("%d", &B);
    printf("Valor de A: %d.\nValor de B: %d.\n\n", A, B);
    C = A;//5
    A = B;
    B = C;
    printf("INVERSO:\n Valor de A: %d.\nValor de B: %d.\n\n", A, B);
    system("pause");
    return 0;
}
