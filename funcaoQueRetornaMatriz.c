#include<stdio.h>
#include<stdlib.h>

int* gerarRandomico(){
    static int r[10];
    int a;

    for (a = 0; a < 10; a++)
    {
        r[a] = rand() % 50;
        printf("\nr[%d] = %d", a, r[a]);
        return r;
    }
}

int main (void){ 
    int *p;
    int i;
    p = gerarRandomico();

    for (i = 0; i < 10; i++)
    {
        printf("\np[%d] = %d", i, p[i]);
    }
    
    return 0;
}