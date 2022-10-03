#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int v;
    printf("Digite um valor: ");
    scanf("%i", &v);

    for(int i = 1; i<=v; i++){
        if(i % 2 == 1){
            printf("%i \n", i);
        } else printf("");
    }
    system("pause");
    return 0;
}
