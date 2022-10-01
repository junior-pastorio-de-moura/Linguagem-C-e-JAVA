#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    for(int i = 0; i <= 20; i++){
        if(i % 3 == 0){
            printf("%i\n", i);
        }
    }
    system("pause");
    return 0;
}
