#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
#include<string.h>
#include<math.h>

int main(void){
    int v[10] = {41, 63, 70, 52, 37, 16, 85, 18, 94, 21};
    printf("Máximo = %d\n", maximo(v, 0, 9));
    return 0;
}