#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>

int imprime(int *m, int n){
    int i;
    for(i = 0; i<n; i++)
        printf("%d \n", m[ i ]);
}

int main(){
    setlocale(LC_ALL, "portuguese");
    int mat[3][2] = {{31, 64},{12, 48},{90, 83}};
    imprime(&mat[0][0], 6);

    system("pause");
    return 0;
}
