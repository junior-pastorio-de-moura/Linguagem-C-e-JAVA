#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

float t1, t2;

float temperaturaMedia(){
    return (t1 + t2) / 2;
}

int main (void){ 
    float temperatura;
    
    printf("Digite as duas temperaturas: ");
    scanf("%f %f", &t1, &t2);
    temperatura = temperaturaMedia();
    printf("A temperatura média é %.2f\n", temperatura);
    return 0;
}