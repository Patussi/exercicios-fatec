#include <stdio.h>

int exercicioseis(){
    int numero;
    printf("\n DIGITE UM NUMERO INTEIRO DE QUATRO DIGITOS\n");
    scanf("%d",&numero);
    printf(" CASA DO MILHAR:    %d\n",(numero/1000));
    printf(" CASA DA CENTENA:   %d\n",((numero%1000)/100));
    printf(" CASA DA DEZENA:    %d\n",(((numero%1000)%100)/10));
    printf(" CASA DA UNIDADE:   %d\n",(((numero%1000)%100)%10));
}