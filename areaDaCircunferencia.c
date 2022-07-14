#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    //area = PI*pow(raio,2);
    float PI = 3.14159;
    float area, raio;
    printf("Cálculo da área de uma circunferência\n\n");
    printf("Insira o valor do raio: ");
    scanf("%f", &raio);
    area = PI*pow(raio, 2);
    printf("A área da circunferência é %.1f\n", area);

    system("pause");
    return 0;
}
