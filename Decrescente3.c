#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>    
#include <locale.h>

int main(){
    int n[3];
    
    for (int i = 0; i < 8; i++)
    {
        printf("Digite tres numeros inteiros: ");
        scanf("%d %d %d", &n[1], &n[2], &n[3]);
        if (n[3] > n[1] , n[2])
    {
        if(n[1] > n[2])
        {
            printf("%d %d %d \n", n[3], n[1], n[2]);
        } else
        {
            printf("%d %d %d \n", n[3], n[2], n[1]);
        }
    } else if(n[2] > n[1], n[3])
    {
        if(n[3] > n[1])
        {
            printf("%d %d %d \n", n[2], n[3], n[1]);
        } else
        {
            printf("%d %d %d \n", n[2], n[1], n[3]);
        }
    } else if(n[1] > n[3] , n[2])
    {
        if(n[3] > n[2])
        {
            printf("%d %d %d \n", n[1], n[3], n[2]);
        } else
        {
            printf("%d %d %d \n", n[1], n[2], n[3]);
        }
    } else printf("%d %d %d \n", n[1], n[2], n[3]);
    n[1] = 0, n[2] = 0, n[3] = 0;
    }
    
    system("pause");   
    return 0;
}
//Todas as possíveis conbinações;
//do maior pro menor: n[3], n[2] e n[1] 
//do maior pro menor: n[3], n[1] e n[2]

//do maior pro menor: n[2], n[1] e n[3]  
//do maior pro menor: n[2], n[3] e n[1]

//do maior pro menor: n[1], n[2] e n[3] 
//do maior pro menor: n[1], n[3] e n[2]

