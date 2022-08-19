#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    float v[3];
    printf("Digite o valor gasto no restaurante: ");
    scanf("%f", &v[1]);
    v[2] = v[1]*0.1;
    v[3] = v[1]+v[2];
    printf("%.2f\n", v[3]);
    system("pause");
    return 0;
}