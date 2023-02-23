#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
#include<string.h>
#include<math.h>

int main(){
    system("clear");

    int *mypointer, x = 5;
    
    mypointer = &x;
    *mypointer = 15;
    printf("mypointer = %d\n", *mypointer);
    return 0;
}