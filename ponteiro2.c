#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
#include<string.h>
#include<math.h>

int main(){
    system("clear");

    int *p, x;

    x = 15;
    p = &x;

    printf("%d", *p);
    printf("\n");
    int v[3] = {9, 8, 6};
    printf("%d, %d, %d\n", v[0], v[1], v[2]);

    //Ponteiro que recebe um array
    int *ponteiro = v;
    printf("%d\n", *ponteiro);
    return 0;
}