#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");

    for(int i = 0; i<=2000; i++){
        if((i % 2 == 0) || (i % 5 == 0) || (i % 3 == 0) || (i % 7 == 0)){
            printf("");
        } else printf("%i\n", i);
    }

    system("pause");
    return 0;
}
