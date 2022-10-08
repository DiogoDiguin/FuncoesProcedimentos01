#include <stdio.h>
#include <stdlib.h>

int soma (int valor){
    int i, adicionar = 0;
        for(i = 0; i <= valor; i ++){
            adicionar = adicionar + i;
        }
    return adicionar;
}//soma

int main()
{
    int valor, resposta;

    printf("Digite o valor a ser utilizado: ");
    scanf("%i", &valor);

    resposta = soma(valor);

    printf("Resultado do somatorio: %i\n", resposta);

}//main
