#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
/*
Passagem de valores por referência:
1 - É usado ponteiro e endereço de memória;
2 - Não é criado uma cópia dos argumentos passados;
3 - É passado o endereço da memória e a função trabalha 
diretamente com os valores ali armazenados;
*/
int somar(int a, int b){
    return a + b;
}

int main (void){ 
    system("clear");
    int result, result2;
    result = somar(10, 15);
    printf("Resultado da soma = %d\n", result);

    int x = 88, y = 99;
    result2 = somar(x, y);
    printf("Resultado da soma de x e y passados para a função = %d\n", result2);
    printf("x = %d e y = %d\n", x, y);
    //Veja acima que a função não altera os valores das variávis x e y.
    return 0;
}