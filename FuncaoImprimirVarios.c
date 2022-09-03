#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>

int imprimir_varios(int quantidade){
    while (quantidade)
    {
        printf("Adoro programar \n");
        --quantidade;
    }
    printf("O valor da quantidade e: %d\n", quantidade);
}

int main(){
    int x;
    scanf("%d", &x);
    imprimir_varios(x);
    printf("O valor de X e: %d\n", x);
    system("pause");
    return 0;
}