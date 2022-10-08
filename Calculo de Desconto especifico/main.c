#include <stdio.h>
#include <stdlib.h>

float desc (float preco){
    float calculo;
    float desconto;

    if (preco >= 0 && preco <= 1000){
        desconto = 0.05; //5% de desconto
    }else if (preco >= 1000.01 && preco <= 2000) {
        desconto = 0.10; //10% de desconto
    }else if (preco > 2000) {
        desconto = 0.15; //15% de desconto
    }

    calculo = preco - (preco * desconto);
    return calculo;
}//desc


int main()
{
   float preco, desconto;
   float resultado;

   printf("Digite o valor do produto: ");
   scanf("%f", &preco);

   resultado = desc(preco);

   printf("Valor com desconto: RS%.2f \n", resultado);
}//main
