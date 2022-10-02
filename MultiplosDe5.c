#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    for(int i=50; i<=200; i++){
        printf("%i\n", i);
    }
    system("pause");
    return 0;
}
