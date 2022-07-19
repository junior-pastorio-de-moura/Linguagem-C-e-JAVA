#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    float pi = M_PI, R, A, raio;
    printf("Digite o raio do circulo: ");
    scanf("%f", &R);
    raio = pow(R,2);
    A = pi*raio;
    printf("\n A area do circulo e: %.2f\n", A);
    system("pause");
    return 0;
}
//Area do círculo Fórmula: A = pi*R^2