#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<time.h>
int main(){
    const x = 5;
    printf("\a x = %d\n", x);
    printf("\b x = %d\n", x);
    printf("\v x = %d\n", x);
    printf("\t x = %d\n", x);
    printf("\r x = %d\n", x);
    printf("\' x = %d\n", x);
    printf("\" x = %d\n", x);
    printf("\\ x = %d\n", x);
    printf("\f x = %d\n", x);
    system("pause");
    return 0;
}
