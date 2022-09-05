#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>

int imprime(int matriz[3][2] , int n){
    int i, j;
    for(i = 0; i<3; i++)
        for(j = 0; j<2; j++)
            printf("%d\n", matriz[i] [j]);
}

int main(){
    setlocale(LC_ALL, "portuguese");
    int mat[3][2] = {{1 ,2},{3 ,4},{5 ,6}};
    imprime(mat,3);

    system("pause");
    return 0;
}

