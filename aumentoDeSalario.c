#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
//Quantas vezes a letra 'a' aparece na frase que o usuario digitou

int main(){
    system("clear");

    float salario_atual;
    float aumento;
    scanf("%f", &salario_atual);

    if (salario_atual > 500)
    {
        aumento = 1.1; //10%
    } else if (salario_atual > 300)
    {
        aumento = 1.07; //7%
    } else {
        aumento = 1.05; //5%
    }
    
    printf("%.2f\n", salario_atual * aumento);

    return 0;
}
