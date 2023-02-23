#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
#include<string.h>
#include<math.h>

int main(){
    system("clear");

    int x = 7;
    int *px;

    px = &x;
    *px = 8;

    printf("%d\n", x);
    printf("%d\n", &x);
    printf("%d\n", *px);
    
    return 0;
}