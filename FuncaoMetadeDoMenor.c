#include<stdio.h>
#include<stdlib.h>
//Fazer esse código retornar a metado do menor;
float metade_do_menor(float x, float y){
    float metade;
    if(x < y){
        metade = x/2;
    } else{
        metade = y/2;
    }
    return metade;
}

int main(){
    float a, b, resultado;
    printf("Digite dois valores: ");
    scanf("%f %f", &a, &b);
    resultado = metade_do_menor(a,b);
    printf("A metade do menor e %.1f\n", resultado);
    system("pause");
    return 0;
}