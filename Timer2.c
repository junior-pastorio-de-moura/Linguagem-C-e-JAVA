#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>    
#include <locale.h>
#include<time.h>
//TIMER2
int main(){
    for (int x = 15; x > 0; x--)
    {
    for (int i = 60; i > 0; i--)
    {
        printf("%d:%d\n", x, i);
        system("cls");
    }        
    }
    system("pause");   
    return 0;
}