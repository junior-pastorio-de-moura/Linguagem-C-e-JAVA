#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>


void mostra(){
    printf("Digite um valor: ");
}

int soma(int x, int y){
    int hg;
    hg = x + y;
    return hg;
}

int algo(int ufv){
    int v[5];
    v[2] = 7;
    v[3] = 3;
    v[1] = (v[2]*v[3])/ufv;
    return v[1];
}

int main(){
    setlocale(LC_ALL, "portuguese");
    int a, b, opi;
    int BB;

    mostra();
    scanf("%d", &a);
    mostra();
    scanf("%d", &b);
    opi = soma(a, b);
    printf("Soma: %i\n", opi);

    BB = algo(opi);

    printf("Valor de outra operação: %i\n", BB);
    system("pause");
    return 0;
}
