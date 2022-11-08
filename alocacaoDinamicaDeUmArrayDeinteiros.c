#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<locale.h>
/*O código a seguir aloca um array com 10 elementos
e depois atribui os valores de 0 a 9 a cada um deles.
*/
int main(){
    system("clear");
    int i;
    int *a;
    a = (int *) malloc (sizeof (int));
    for (i = 0; i < 10; i++)
    {
        a[i] = i;
    }
    
    return 0;
}