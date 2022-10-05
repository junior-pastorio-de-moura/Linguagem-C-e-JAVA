#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int x = 10, y = 50;
    for(int z = y; x <= z; x++){
        if(x % 2 == 1){
            printf("%i\n", x);
        }
    }
    system("pause");
    return 0;
}
