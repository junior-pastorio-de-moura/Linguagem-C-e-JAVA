#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
#include<string.h>
#include<math.h>

int main(){
    system("clear");

    int x = 5;
    int *p;
    p = &x;
    
    printf("%d\n", *p);

    int v[3] = {9, 6, 7};
    int *p2;
    p2 = v;
    printf("%d\n", (*p2+1));
    printf("%d\n", p2[1]+ 5);
    return 0;
}