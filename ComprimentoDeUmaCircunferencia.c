#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<locale.h>

int main(){
    float pi = 3.1415;
    float raio, comp;
    printf("Digite o raio: ");
    scanf("%f", &raio);

    comp = (2*pi)*raio;
    printf("Comprimento da circumferencia: %.2f\n", comp);

    system("pause");
    return 0;
}