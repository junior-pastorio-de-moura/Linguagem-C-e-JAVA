#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<math.h>
const int z = 9;
int main(){
    setlocale(LC_ALL, "portuguese");
    int x = 5, y = 3;
    printf("Resultado: %d\n", x>4);
    printf("Resultado: %d\n", x==4);
    printf("Resultado: %d\n", x!=4);
    printf("Resultado: %d\n", x!=y+2);
    system("pause");
    return 0;
}
