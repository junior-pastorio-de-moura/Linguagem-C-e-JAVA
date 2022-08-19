#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>    
#include <locale.h>
#include<time.h>

int main(){
    int lado[4];
    for (int i = 1; i <= 3; i++)
    {
        printf("Digite o %i.o lado: ", i);
        scanf("%d", &lado[i]);
    }
    if (lado[1]==lado[2] && lado[1]==lado[3] && lado[3]==lado[2])
    {
        printf("Triangulo Equilatero!\n");
    } else if((lado[1]==lado[2] && lado[1]!=lado[3])){
        printf("Triangulo Isoceles!\n");
    } else if((lado[1]==lado[3] && lado[1]!=lado[2])){
        printf("Triangulo Isoceles!\n");
    } else if((lado[2]==lado[3] && lado[2]!=lado[1])){
        printf("Triangulo Isoceles!\n");
    } else printf("Triangulo escaleno!\n");
    
    system("pause");   
    return 0;
}