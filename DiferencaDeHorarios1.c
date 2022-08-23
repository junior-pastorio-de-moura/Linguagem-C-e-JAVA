#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int hr[2], min[2], seg[3], x[2], y, z;
    printf("Digite o 1.o horário:\n HORAS:\t");
    scanf("%i", &hr[1]);
    printf("MINUTOS: ");
    scanf("%i", &min[1]);
    printf("SEGUNDOS: ");
    scanf("%i", &seg[1]);
    printf("Digite o 2.o horário:\n HORAS:\t");
    scanf("%i", &hr[2]);
    printf("MINUTOS: ");
    scanf("%i", &min[2]);
    printf("SEGUNDOS: ");
    scanf("%i", &seg[2]);
    x[1] = (hr[1]*3600) + (min[1]*60) + seg[1];
    x[2] = (hr[2]*3600) + (min[2]*60) + seg[2];
    if(x[1]>x[2]){
        y = x[1] - x[2];
        printf("A 1.a hora é maior que a 2.a hora!\n");
        printf("Diferença da horários em segundos:\t%i\n", y);
    } else if(x[1]<x[2]){
        z = x[2] - x[1];
        printf("A 2.a hora é maior que a 1.a hora!\n");
        printf("Diferença da horários em segundos:\t%i\n", z);
    }
    system("pause");
    return 0;
}
