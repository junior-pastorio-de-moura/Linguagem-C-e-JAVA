#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
#include<string.h>
#include<math.h>

int main(void){
    system("clear");

    int a = 3, b = 5;
    int *p = &a, *q = &b;

    *p = *p + *q;
    *q = *p - *q;
    printf("%d, %d\n", a, b);
    return 0;
}