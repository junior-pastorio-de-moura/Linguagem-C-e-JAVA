#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int diferenca, prod[2], a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    prod[1] = a*b;
    prod[2] = c*d;
    diferenca = prod[1] - prod[2];
    printf("DIFERENCA = %d\n", diferenca);
    system("pause");
    return 0;
}