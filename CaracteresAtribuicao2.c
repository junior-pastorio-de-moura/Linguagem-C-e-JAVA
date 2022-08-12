#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int i=1;
    char A[6];

    for(; i<=6; i++){
        printf("Digite o %i.o caractere: ", i);
        scanf("%c", &A[i]);
        getchar();
        fflush(stdin);
    }
    fflush(stdin);
    for(int i=0; i<=6; i++){
        printf("%c", A[i]);
    }
    printf("\n\n");
    system("pause");
    return 0;
}
//Porque aparece um símbolo antes e depois do nome? Resolver esse bug!