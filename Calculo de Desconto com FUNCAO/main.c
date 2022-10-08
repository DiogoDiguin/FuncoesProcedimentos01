#include <stdio.h>
#include <stdlib.h>

float desc (float preco, float desconto){
    float calculo;
    desconto = desconto / 100;

    calculo = preco - (preco * desconto);
    return calculo;
}//desc


int main()
{
   float preco, desconto;
   float resultado;

   printf("Digite o valor do produto: ");
   scanf("%f", &preco);
   printf("Digite o desconto do produto: ");
   scanf("%f", &desconto);

   resultado = desc(preco, desconto);

   printf("\nValor com desconto: RS%.2f \n", resultado);
}//main
