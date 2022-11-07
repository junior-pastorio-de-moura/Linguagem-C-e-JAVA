#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<locale.h>

int main(){
    system("clear");
    int i, j;
    int *p[2];
    p[0] = (int *) malloc (5 * sizeof(int));
    p[1] = (int *) malloc (5 * sizeof(int));
    for (i = 0; i < 2; ++i)
    {
        for (j = 0; j < 5; ++j)
        {
            p[i][j];
        }    
    }
    //p é um ponteiro para um ponteiro
    return 0;
}