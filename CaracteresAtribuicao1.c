#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    char letra1, letra2;
    letra1 = 'T';
    letra2 = 'b';
    printf("%c\n", letra1);
    printf("%c\n\n", letra2);
    
    char A[6];
    A[1] = 'J';
    A[2] = 'u';
    A[3] = 'n';
    A[4] = 'i';
    A[5] = 'o';
    A[6] = 'r';
    printf("%c%c%c%c%c%c\n\n", A[1], A[2], A[3], A[4], A[5], A[6]);

    system("pause");
    return 0;
}
