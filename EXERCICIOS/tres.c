#include <stdio.h>

int exerciciotres(){
    int numero;
    printf("\n DIGITE UM NUMERO\n");
    scanf("%d",&numero);
    printf("\n O ANTECESSOR E: %d \n O POSTERIOR E: %d\n", (numero-1), (numero+1));
}