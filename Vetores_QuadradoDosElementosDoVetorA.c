#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int A[9], B[9];

    for(int i=0; i<=9; i++){
        A[i] = rand() % 9;
    }
    //Mostrando os elementos do vetor A;
    printf("VETOR A: \n");
    for(int i=0; i<=5; i++){
        printf("%i ", A[i]);
    }
    //O vetor B receberá o quadrado dos elementos do vetor A;
    for(int i=0; i<=5; i++){
        B[i] = A[i]*A[i];
    }
    //Mostrando na tela os valores do vetor B;
    printf("\nVETOR B: \n");
    for(int i=0; i<=5; i++){
        printf("%i ", B[i]);
    }

    printf("\n");
    system("pause");
    return 0;
}
