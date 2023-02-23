#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
#include<string.h>
#include<math.h>

typedef struct no
{
    int item;
    struct no *prox;
} *Lst;

Lst no(int x, Lst p){
    Lst n = malloc(sizeof(struct no));
    
    n->item = x;
    n->prox = p;
    return n;
}

int main(void){
    system("clear");

    Lst p = no(1, no(2, no(3, no(4, NULL))));

    while (p)
    {
        printf("%d\n", p->item);
        p = p->prox;
    }
    
    return 0;
}