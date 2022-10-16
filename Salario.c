#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int n;
    float sal, v, nD;
    printf("Digite o numero de um funcionario: ");
    scanf("%d", &n);
    printf("Digite o numero de horas trabalhadas: ");
    scanf("%f", &nD);
    printf("Digite o valor hora: ");
    scanf("%f", &v);
    sal = nD * v;
    printf("NUMBER = %i\n", n);
    printf("SALARY = R$ %.2f\n", sal);
    return 0;
}