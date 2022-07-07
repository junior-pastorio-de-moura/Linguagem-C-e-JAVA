#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<math.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int v[2];
    printf("Digite um valor: ");
    scanf("%i", &v[1]);
    v[2] = v[1] - 1;
    printf("O seu antecessor é: %i\n", v[2]);

    system("pause");
    return 0;
}
