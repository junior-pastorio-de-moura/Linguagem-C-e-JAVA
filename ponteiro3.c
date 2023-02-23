#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
#include<string.h>
#include<math.h>

int main(){
    system("clear");

    int y, *p, x;

    y = 0;
    p = &y;
    x = *p;
    x = 4;
    (*p)++;
    (*p) += x;
    
    printf("y = %d\n", y);
    printf("x = %d\n", x);
    printf("p = %d\n", *p);
    return 0;
}