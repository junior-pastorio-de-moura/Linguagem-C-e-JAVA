#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int M[4][3], soma = 0;

    printf("MATRIZ[3][3]: \n");

    for(int l=0; l<4; l++){
        for(int c=0; c<3; c++){
            M[l][c] = rand() % 9;
        }
    }

    for(int l=0; l<4; l++){
        printf("\n");
        for(int c=0; c<3; c++){
            printf("%d ", M[l][c]);
        }
    }
    printf("\n\n");
    for(int l=0; l<4; l++){
        for(int c=0; c<3; c++){
            soma = soma + M[l][c];
        }
    }
    printf("\nSOMA DOS VALORES DA MATRIZ: %i\n", soma);

    printf("\n");
    system("pause");
    return 0;
}
