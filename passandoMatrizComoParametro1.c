#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<locale.h>
/*Passando matriz estática como parâmetro de uma função!
*/
void matriz_estatica(int m[5][3]){/*...*/}

int main(){
    system("clear");
    int x[5][3];
    matriz_estatica(x);
    return 0;
}