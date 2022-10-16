#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<math.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int R[4], M;
    printf("Adicione a renda bembro 1: ");
    scanf("%i", &R[1]);
    printf("Adicione a renda bembro 2: ");
    scanf("%i", &R[2]);
    printf("Adicione a renda bembro 3: ");
    scanf("%i", &R[3]);
    printf("Adicione a renda bembro 4: ");
    scanf("%i", &R[4]);

    M = (R[1]+R[2]+R[3]+R[4])/4;
    printf("A renda percapta da família é R$: %i,00\n\n");

    system("pause");
    return 0;
}
