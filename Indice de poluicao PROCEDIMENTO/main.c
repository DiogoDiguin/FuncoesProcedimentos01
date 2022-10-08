#include <stdio.h>
#include <stdlib.h>

void poluicao (float i){

    if (i < 0.30){
        printf("\nSituacao | Providencia \n");
        printf("   BOA   | Nenhuma providencia \n");
    }else if (0.30 <= i && i < 0.40){
        printf("\nSituacao | Providencia \n");
        printf("  RUIM   | Suspender empresas da lista A \n");
    }else if (0.40 <= i && i <= 0.50){
        printf("\nSituacao | Providencia \n");
        printf(" PESSIMA | Suspender empresas das listas A e B \n");
    }else if (0.50 < i && i <= 1){
        printf("\nSituacao | Providencia \n");
        printf(" CRITICA | Suspender todas as empresas \n");
    }
}//poluicao


int main()
{
    float indice;

    printf("Digite um valor de 0 a 1\n");
    printf("Indice de poluicao: ");
    scanf("%f", &indice);

    poluicao(indice);

}//main
