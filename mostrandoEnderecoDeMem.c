#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
#include<string.h>
#include<math.h>

int main(){
    system("clear");

    int *mypointer, x = 5;
    
    mypointer = &x;//O ponteiro recebe o endereço de memória, mas não aponta para nenhum valor
    printf("Endereço de memória de x = %x\n", mypointer);//Exibindo o endereço de memória.
    return 0;
}
//mypointer = Pra receber um endereço de memória
//*mypointer = Para receber um valor