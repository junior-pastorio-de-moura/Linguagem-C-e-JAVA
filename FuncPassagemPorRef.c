#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void testar(int* n1, int* n2){
    *n1 = -1;
    *n2 = -2;
    printf("Valores dentro da função testar(): ");
    printf("n1 = %d e n2 = %d\n", *n1, *n2);
}

int main (void){ 
    int n1 = 10;
    int n2 = 20;
    printf("Valores antes de chamar a função testar(): ");
    printf("n1 = %d e n2 = %d\n", n1, n2);

    testar(&n1, &n2);//Manda o endereço de memória para a função
    printf("Valores depois de chamar a função testar(): ");
    printf("n1 = %d e n2 = %d\n", n1, n2);
    return 0;
}