#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int n[3];
    printf("Digite tres numeros inteiros: ");
    scanf("%i %i %i", &n[1], &n[2], &n[3]);
    if((n[1] == n[2])&&(n[1] == n[3])&&(n[2] == n[3])){
        printf("1\n");
    } else if((n[1] == n[2])||(n[1] == n[3])||(n[2] == n[3])||(n[3] == n[1])){
        printf("3\n");
    } else printf("2\n");
    system("pause");
    return 0;
}