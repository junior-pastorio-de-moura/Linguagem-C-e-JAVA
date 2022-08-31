#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<time.h>
int x = 5;
int main(){
    printf("x = %d\n", x);
    int x = 4;
    printf("x = %d\n", x);
    { // Esse é um escopo local dentro de outro escopo local.
        int x = 3;
        printf("x = %d\n", x);
    }
    printf("x = %d\n", x);
    system("pause");
    return 0;
}
