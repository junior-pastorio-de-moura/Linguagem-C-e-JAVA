#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<locale.h>
//Alocação dinâmica de array bidimensional (matrizes)
/*Para haver uma matriz é necessário um array de ponteiros, e
existe duas formas para ser feito isso:*/
int main(){
    system("clear");
    //Forma 1:
    int *p1, *p2;
    p1 = (int *) malloc (5 * sizeof(int));
    p2 = (int *) malloc (5 * sizeof(int));
    //Forma 2:
    int *p[2];
    p[0] = (int *) malloc (5 * sizeof(int));
    p[1] = (int *) malloc (5 * sizeof(int));
    return 0;
}