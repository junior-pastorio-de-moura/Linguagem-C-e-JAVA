#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
#include<string.h>
#include<math.h>

int main(){
    system("clear");

    int firstvalue, secondvalue;
    int *mypointer;
    
    mypointer = &firstvalue;
    *mypointer = 10;

    mypointer = &secondvalue;
    *mypointer = 20;

    printf("%d\n", firstvalue);
    printf("%d\n", secondvalue);
    
    int x;
    mypointer = &x;//O ponteiro recebe o endereço de memória, mas não aponta para nenhum valor
    printf("x = %x\n", mypointer);//Exibindo o endereço de memória.
    return 0;
}
//mypointer = Pra receber um endereço de memória
//*mypointer = Para receber um valor