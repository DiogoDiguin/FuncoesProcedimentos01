#include <stdio.h>
#include <stdlib.h>

int julgar (int i){

    if (i % 2 == 0){
        return 1;
        print("\n");
    }else{
        return 0;
        print("\n");
    }
}//julgar

int main()
{
    int valor, decisao;

    printf("Digite um valor: ");
    scanf("%i", &valor);

    decisao = julgar(valor);
    printf("%i\n", decisao);
}//main
