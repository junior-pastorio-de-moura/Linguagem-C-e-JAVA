#include<stdlib.h>
#include<stdio.h>

int main(){
    float R, area, volume, PI = 3.1416, cubo;
    printf("CALCULO DA ESFERA!\n\n");
    printf("Forneca o raio da esfera: ");
    scanf("%f", &R);
    area = 4*PI*(R*R);
    printf("Area da superficie esferica: %.2f\n", area);
    cubo = R*R*R;
    volume = (4*PI*cubo)/3;
    printf("Volume da esfera: %.2f\n", volume);
    system("pause");
    return 0;
}