#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(void){
    float salario_bruto, desc_inss, desc_ir, salario_liquido;

    printf("\n\nCálculo de salário líquido com desconto do IR e INSS");
    printf("\nDigite seu salário bruto: ");
    scanf("%f", &salario_bruto);

    //Cálculo do desconto do INSS
    if (salario_bruto <= 1045.0)
    {
        desc_inss = salario_bruto * 0.075;
    } else if (salario_bruto <= 2089.60)
    {
        desc_inss = salario_bruto * 0.09;
    } else if (salario_bruto <= 3134.40){
        desc_inss = salario_bruto * 0.12;
    } else{
        desc_ir = salario_bruto * 0.275;
    }
    
    salario_liquido = salario_bruto - desc_inss - desc_ir;

    printf("\n Desconto INSS: R$ %.2f", desc_inss);
    printf("\n Desconto IR: R$ %.2f", desc_ir);
    printf("\n Salário líquido: R$ %.2f", salario_liquido);
    return 0;
}