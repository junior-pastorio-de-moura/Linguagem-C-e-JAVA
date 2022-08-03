#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<math.h>
const int z = 9;
int main(){
    setlocale(LC_ALL, "portuguese");
    int R[4];
    //Primeiro cálculo
    R[1]= 3-2-1+2+1+3;
    printf("Cálculo 1: %i\n", R[1]);
    //Segundo Cálculo
    R[2] = 2*3-4*5;
    printf("Cálculo 2: %i\n", R[2]);
    //Terceiro Cálculo
    R[3] = 2+6-3/7*9;
    printf("Cálculo 3: %i\n", R[3]);
    //Quarto cálculo
    R[4] = 3%4-8;
    printf("Cálculo 2: %i\n", R[4]);

    system("pause");
    return 0;
}
