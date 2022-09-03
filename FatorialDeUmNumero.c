#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>    
#include <locale.h>
#include<conio.h>
#include<time.h>

int main(){
    int n, f = 1;
    printf("Digite um numero: ");
    scanf("%d", &n);    
    for (int i = 1; i <= n; i++)
    {
        f = f*i;
    }
    printf("%d! = %d\n\n", n, f);
    system("pause");   
    return 0;
}
