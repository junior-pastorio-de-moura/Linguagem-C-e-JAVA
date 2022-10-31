#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int A[9], B[9], C[9];

    printf("Vetor A: \n");
    for(int i=0; i<= 9; i++){
        A[i] = rand() % 15;
            printf("%i ", A[i]);
    }

    printf("\nVetor B: \n");
    for(int i=0; i<= 9; i++){
        B[i] = A[i]%2;
            printf("%i ", B[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}
