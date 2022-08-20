#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>    

int main(){
    int n;
    scanf("%d", &n);
    if(n < 11){
        printf("7\n");
    } else if(n >= 11 && n <= 30){
        printf("27\n");
    } else if(n >= 31 && n <= 100){
        printf("167\n");
    } else printf("267\n");
    return 0;
}
