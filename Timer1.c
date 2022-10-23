#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>    
#include <locale.h>
#include<time.h>
//TIMER1
int main(){
    for (int x = 0; x < 10; x++)
    {
    for (int i = 0; i < 60; i++)
    {
        printf("%d:%d\n", x, i);
        _sleep(1);
        system("cls");
    }        
    }
    system("pause");   
    return 0;
}