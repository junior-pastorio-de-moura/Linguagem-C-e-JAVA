#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

#define T 10

void trocar(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

void boubble_sort(int a[], int tamanho){
    int i, j;
    for (i = tamanho - 1; i >= 1; i--)
    {
        if (a[j] > a[j+1])
        {
            trocar(&a[j], &a[j+1]);
        }
    }
}

int main(void){
    int array[T] = {10, 5, 8, 7, 3, 9, 1, 4, 2, 6};
    int i;
    boubble_sort(array, T);
    for (i = 0; i < T; ++i)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0; 
}