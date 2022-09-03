#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
// 3! = 1x2x3
int fatorial(int x){
    int fat = 1;
    for (int i = 1; i <= x; i++)
    {
        fat = fat*i;
    }
    return fat;
}

int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("FATORIAL:\n");
    printf("%i! = %i.\n", n, fatorial(n));
   return 0;
}