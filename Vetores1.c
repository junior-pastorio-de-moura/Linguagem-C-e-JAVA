#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int v;
void frase(){
    printf("Digite algum valor: ");

}
int subtracao(int x){
    int i = 4, resp;
    resp = x - i;
    return resp;
}

int main(){
        setlocale(LC_ALL, "portuguese");

        frase();
        scanf("%d", &v);
        subtracao(v);
        printf("Subtração = %d \n", subtracao(v));

        system("pause");
        return 0;
}
