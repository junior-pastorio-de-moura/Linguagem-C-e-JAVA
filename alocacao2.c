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
} No;


int main(void){
    system("clear");

    No v[4] = {{3, v + 2}, {1, v + 3}, {4, NULL}, {2, v + 0}};

    for (No *p = v+1; p != NULL; p = p->prox)
    {
        printf("%d\n", p->item);
    }
    
    return 0;
}