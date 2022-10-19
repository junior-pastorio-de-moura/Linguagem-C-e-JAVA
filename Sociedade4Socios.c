#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<math.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    float S[4], total, x[4], ultimo;
    printf("Digite o valor contribuido pelo socio 1: ");
    scanf("%f", &S[1]);
    printf("Digite o valor contribuido pelo socio 2: ");
    scanf("%f", &S[2]);
    printf("Digite o valor contribuido pelo socio 3: ");
    scanf("%f", &S[3]);
    printf("Digite o valor contribuido pelo socio 4: ");
    scanf("%f", &S[4]);
    total = S[1] + S[2] + S[3] + S[4];
    printf("Total investido pelos socios: R$; %.2f\n", total);
    x[1] = (S[1]*100)/total;
    x[2] = (S[2]*100)/total;
    x[3] = (S[3]*100)/total;
    ultimo = (S[4]*100)/total;
    printf("Porgentagem  que cada socio tem da empresa: \n");
    printf("X = %.2f%%\n", x[1]);
    printf("X = %.2f%%\n", x[2]);
    printf("X = %.2f%%\n", x[3]);
    printf("X = %.2f%%\n", ultimo);

    system("pause");
    return 0;
}
