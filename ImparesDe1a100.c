#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int x = 1;
    //Exibindo todos os n�meros �mpares de 1 at� 100
    while(x < 100){
        if(x%2 == 0){
            printf("%i\n", x);
        }
        x++;
    }
    system("pause");
    return 0;
}
