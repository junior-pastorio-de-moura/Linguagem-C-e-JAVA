#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>    

int main(){
    int codigo, qnt;
    float total, desc, v;
    scanf("%d", &codigo);
    switch (codigo)
    {
    case 1:
        scanf("%d", &qnt);
        //Valor sem desconto
        total = qnt*5.3;
        //Desconto
        desc = total * 0.15;
        if(qnt >=15 || total >=40){
            //Valor com o desconto
            v = total - desc;
            printf("%.2f\n", v);
        } else{
            printf("%.2f\n", total);
        }
        break;
        case 2:
        scanf("%d", &qnt);
        //Valor sem desconto
        total = qnt*6;
        //Desconto
        desc = total * 0.15;
        if(qnt >=15 || total >=40){
            //Valor com o desconto
            v = total - desc;
            printf("%.2f\n", v);
        } else{
            printf("%.2f\n", total);
        }
        break;
        case 3:
        scanf("%d", &qnt);
        //Valor sem desconto
        total = qnt*3.2;
        //Desconto
        desc = total * 0.15;
        if(qnt >=15 || total >=40){
            //Valor com o desconto
            v = total - desc;
            printf("%.2f\n", v);
        } else{
            printf("%.2f\n", total);
        }
        break;
        case 4:
        scanf("%d", &qnt);
        //Valor sem desconto
        total = qnt*2.5;
        //Desconto
        desc = total * 0.15;
        if(qnt >=15 || total >=40){
            //Valor com o desconto
            v = total - desc;
            printf("%.2f\n", v);
        } else{
            printf("%.2f\n", total);
        }
        break;
    default:
        break;
    }
    
    return 0;
}
