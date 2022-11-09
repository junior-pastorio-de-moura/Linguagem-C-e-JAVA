#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<locale.h>
//Uso da função free para desalocar a memória.
int main(){
    system("clear");
    int *a = (int *) malloc (sizeof (int));
    *a = 5;
    printf("%d\n", *a);
    free(a);
    return 0;
}