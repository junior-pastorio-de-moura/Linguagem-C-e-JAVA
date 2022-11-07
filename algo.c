#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<locale.h>
#include<string.h>

int main(){
    system("clear");
    int x = 12, y = 3, z = 4;
    printf("Calculo de valores\t%d %d %d\n", x, y, z);
    int mult;
    mult = x * (y + z);
    printf("multiplicacao: %d\n", mult);
    printf("é não, rústico\n");
    int ru[2];
    ru[0] = 5;
    printf("Potência de 5 ao quadrado: %d\n", ru[0]*ru[0]);
    return 0;
}