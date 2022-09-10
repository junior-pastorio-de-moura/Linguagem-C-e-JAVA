#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int soma(int a, int b){
    int S;
    S = a+b;
    return S;
}

int main() {
    int v[2];
    printf("Digite dois valores: ");
    scanf("%d %d", &v[1], &v[2]);
    printf("SOMA: %i\n", soma(v[1],v[2]));
    system("pause");
	return 0;
}