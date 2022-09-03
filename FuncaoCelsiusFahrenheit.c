#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<locale.h>
#include<math.h>
//F = 1.8*C+32;
//Receber uma temperatura em Celsius e transforma-la em F.

void texto(){
    printf("--Conversor de temperatura--\n\n");
    printf("Digite uma temperatura em Celsius: ");
}

float conversor(float C){
    float F;
    F = 1.8*C+32;
    return F;
}

int main(){
    float celsius, r;
    texto();
    scanf("%f", &celsius);
    r = conversor(celsius);
    printf("%.0f graus celsius corresponde a %.0f fahrenheit!\n\n", celsius, r);
    system("pause");
    return 0;
}