#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<locale.h>

int main(){
    system("clear");
    int *p;
    p = (int *) malloc (sizeof(int));
    *p = 5;
    scanf("%d", p);
    printf("%d\n", *p);
    return 0;
}