#include<stdio.h>
#include<stdlib.h>

float dobro_do_maior(float x, float y){
    float dobro;
    if(x > y){
        dobro = x*2;
    } else{
        dobro = y*2;
    }
    return dobro;
}

int main(){
    float a, b, resultado;
    printf("Digite dois valores: ");
    //Para ler corretamente os valores digitados deve ser
    // adicionado espaço entre eles! EX: 3 15
    scanf("%f %f", &a, &b);
    resultado = dobro_do_maior(a,b);
    printf("O dobro do maior e %.1f\n", resultado);
    system("pause");
    return 0;
}