#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>    
#include <locale.h>
#include<conio.h>
#include<time.h>

int main(){
    int n, i;
    float v[1000], media, soma;
    v[0] = 35.5;
    scanf("%d", &n);
    soma = 0;
    for(i = 0; i<n; ++i)
    {
        scanf("%f", &v[i]);
        soma += v[i];
    }
    media = soma/n;
    printf("%.2f\n", media);
    for(i = 0; i<n; ++i)
    {
        printf("%f\n", v[i]);
    }
    return 0;
}