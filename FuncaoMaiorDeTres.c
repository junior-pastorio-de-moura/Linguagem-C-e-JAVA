#include<stdio.h>

int maiorDeTres(int a, int b, int c){
    if(a > b && a >c){
        return a;
    } else if(b > a && b >c){
        return b;
    } else{
        return c;
    }
}
int main(){
    int x, y, z, M;
    printf("Digite tres valores: ");
    scanf("%d %d %d", &x, &y, &z);
    M = maiorDeTres(x,y,z);
    printf("O maior valor entre %d %d  %d e %d\n", x, y, z, M);
    system("pause");
    return 0;
}