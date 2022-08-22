#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int i, valor[10];
    for(i = 1; i <= 10; i++){
        printf("%Digite o %i.o valor:", i);
        scanf("%i", &valor[i]);
        if(valor[i] >= 10 && valor[i] <= 20){
            printf("O valor está dentro do intervalo de 10 a 20!\n");
        } else{
            printf("Os valores estão fora do intervalo de 10 a 20!\n");
        }
    }
    system("pause");
    return 0;
}
