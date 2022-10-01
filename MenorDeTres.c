#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>    

int main(){
    int n[3];
    scanf("%d", &n[1]);
    scanf("%d", &n[2]);
    scanf("%d", &n[3]);
    if((n[1] < n[2])&&(n[1] < n[3])){
        printf("%d\n", n[1]);
    } else if((n[2] < n[1])&&(n[2] < n[3])){
        printf("%d\n", n[2]);
    } else printf("%d\n", n[3]);
    return 0;
}
