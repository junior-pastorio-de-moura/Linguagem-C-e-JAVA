#include<stdio.h>
#define Q '#'

void casa(){
    printf("%c%c%c%c\n", Q, Q, Q, Q);
    printf("%c%c%c%c\n", Q, Q, Q, Q);
    printf("%c%c%c%c%c%c%c\n", Q, Q, Q, Q, Q, Q, Q);
    printf("%c%c%c%c%c%c%c\n", Q, Q, Q, Q, Q, Q, Q);
    printf("%c%c%c%c\n", Q, Q, Q, Q);
    printf("%c%c%c%c\n", Q, Q, Q, Q);
}

int main(){

    casa();
    
    system("pause");
    return 0;
}