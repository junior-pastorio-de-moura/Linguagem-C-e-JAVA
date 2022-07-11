#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int x, antes, depois;
    scanf("%d", &x);
    antes = x-1;
    depois = x+1;
    printf("%d %d\n", antes, depois);
    system("pause");
    return 0;
}