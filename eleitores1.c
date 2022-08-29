#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int nt, vb, vn, vv, x[3];
    printf("Digite o numero total de eleitores: ");
    scanf("%i", &nt);
    printf("Digite o número de votos em branco: ");
    scanf("%i", &vb);
    printf("Digite o número de votos nulos: ");
    scanf("%i", &vn);
    printf("Digite o número de votos válidos: ");
    scanf("%i", &vv);

    x[1] = (vb*100)/nt;
    x[2] = (vn*100)/nt;
    x[3] = (vv*100)/nt;
    printf("Percentual:\n");
    printf("VOTOS EM BRANCO: %i%%.\n", x[1]);
    printf("VOTOS NÚLOS: %i%%.\n", x[2]);
    printf("VOTOS VÁLIDOS: %i%%.\n", x[3]);
    system("pause");
    return 0;
}
