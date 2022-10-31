#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int A[9], B[9];
    printf("Vetor A: \n");
    for(int i=0; i<= 9; i++){
        A[i] = rand() % 15;
        printf("%i\n", A[i]);
    }
    printf("Vetor B: \n");
    for(int i=0; i<=9; i++){
        B[i] = A[i]*i;
        printf("%i\n", B[i]);
    }

    printf("\n");
    system("pause");
    return 0;
}
