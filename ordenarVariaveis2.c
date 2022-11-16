#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
//Ordernar 3 valores
int trocar(int *x, int *y){
    int aux = *x;
    *x = *y;
    *y = aux;
}

int main(){
    system("clear");
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if (a > c || b > c)
    {
        if (a > b)
        {
            trocar(&a, &c);
        }
        else
        {
            trocar(&b, &c);
        }
    }
    if (a > b)
    {
        trocar(&a, &b);
    }
    
    printf("%d %d %d\n", a ,b, c);

    return 0;
}