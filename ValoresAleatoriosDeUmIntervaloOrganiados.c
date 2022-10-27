#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int v[20];
    for(int i=1; i<=20; i++){
        //printf("Digite um valor: ");
        // scanf("%i", &v[i]);
        v[i] = rand () % 9;

    }

    for(int i=1; i<=20; i++){
        printf("%i ", v[i]);
        if(i % 5 == 0){
            printf("\n");
        }
    }
    system("pause");
    return 0;
}
