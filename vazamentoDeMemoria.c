#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<locale.h>

void uso_pilha(){
    int a = 5;
    printf("%d\n", a);
}

void uso_heap(){
    int *a = (int *) malloc (sizeof (int));
    *a = 5;
    printf("%d\n", *a);
}

int main(){
    system("clear");
    int i;
    for (i = 0; i < 10; i++)
    {
        uso_pilha();
    }
    for (i = 0; i < 10; i++)
    {
        uso_heap();
    }
    
    return 0;
}