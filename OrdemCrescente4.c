#include<stdlib.h>
#include<stdio.h>

int main(){
    int x, y;
    printf("Digite dois numeros inteiro: ");
    scanf("%d %d", &x, &y);
    if(x > y){
        printf("%i %i\n", y, x);
    } else if(x < y){
        printf("%i %i\n", x, y);
    } else printf("%i %i\n", x, y);
    system("pause");
    return 0;
}