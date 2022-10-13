#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>    
//Eixo X, eixo Y, Origem, primeiro, segundo, terceiro ou quarto quadrante
void planocartesiano(){
    printf("Plano cartesiano: \n\n");
    printf("              y                 \n");
    printf("              |                 \n");
    printf("    Q2        |     Q1          \n");
    printf("              |                 \n");
    printf("              |                 \n");
    printf("x ---------------------------- x\n");
    printf("              |                 \n");
    printf("              |                 \n");
    printf("      Q3      |      Q4         \n");
    printf("              |                 \n");
    printf("              y                 \n");
}

int main(){
    planocartesiano();
    int x, y;
    printf("Digite um valor pra x e y respectivamente: ");
    scanf("%d %d", &x, &y);
    if(x == 0){
        printf("eixo Y\n");
    } else if(y == 0){
        printf("eixo X\n");
    } else if(x == 0 && y == 0){
        printf("origem\n");
    } else if(x > 0 && y > 0){
        printf("primeiro quadrante\n");
    } else if(x < 0 && y < 0){
        printf("terceiro quadrante\n");
    } else if(x < 0 && y > 0){
        printf("segundo quadrante\n");
    } else{
        printf("quarto quadrante\n");
    }
    return 0;
}