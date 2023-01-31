#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
//Este código deixa a palavra que o usuário digita em maiúscula
#define NOME_TAM 30

int titulo(void){
    system("clear");
    printf("\n CÁLCULO DO IMC \n");
}


int main(void){
    float peso, altura, resultado;
    titulo();
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    titulo();
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    //Cálculo do imc
    titulo();
    resultado = peso / (altura * altura);
    printf("\nSeu imc é %.2f\n", resultado);
    if (resultado < 18.5)
    {
        printf("Abaixo do peso!\n");
    } else if(resultado >= 18.5 && resultado < 24.9){
        printf("Peso ideal!\n");
    } else{
        printf("Sobrepeso\n");
    }
    
    return 0;
}