#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<locale.h>
#include<math.h>

float celsius_to_fahrenheit(float celsius){
    return 1.8*celsius+32;
}

int main(){
    float celsiuis, fah;
    scanf("%f", &celsiuis);
    fah = celsius_to_fahrenheit(celsiuis);
    printf("A temperatura em Fahrenheit e: %f\n", fah);
    system("pause");
    return 0;
}