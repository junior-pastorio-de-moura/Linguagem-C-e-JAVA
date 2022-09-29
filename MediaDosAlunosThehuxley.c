#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>    

int main(){
    int n[3], media;
    scanf("%d %d %d", &n[1], &n[2], &n[3]);
    media = (n[1] + n[2] + n[3]) / 3;
    if(media < 3){
        printf("reprovado\n");
    } else if(media >= 7){
        printf("aprovado\n");
    } else printf("prova final\n");
    system("pause");
    return 0;
}
