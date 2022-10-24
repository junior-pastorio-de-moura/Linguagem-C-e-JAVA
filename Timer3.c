#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>    
#include <locale.h>
#include<time.h>
//TIMER3
int main(){
    int sec, min;
    printf("Digite o tempo de seu timer: ");
    scanf("%d %d", &min, &sec);

    for(int y = min; y >= 0; y--)
    {
        for (int x = sec; x > 0; x--)
        {
        for (int i = 60; i > 0; i--)
        {
            printf("%d:%d", y ,x);
            _sleep(1);
            system("cls");
        }        
        }
        sec = 60;
    }

    system("pause");   
    return 0;
}