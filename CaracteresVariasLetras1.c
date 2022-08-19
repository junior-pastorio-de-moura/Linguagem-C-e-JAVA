#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>    

int main(){
    char letra[5];
    for (int i = 0; i <= 5; i++)
    {
        printf("Digite a %i.a letra: ", i+1);
        scanf("%c", &letra[i]);
        fflush(stdin);   
    }
    system("pause");
    return 0;
}
