#include <stdio.h>
#include <math.h>

int exerciciosete(){
    double numero;
    printf("\n ENTRE COM UM NUMERO\n");
    scanf("%1f",&numero);
    if (numero < 0){
        printf(" O %1f AO QUADRADO E %1f \n", numero, pow(numero,2));
    }
    else{
        printf(" \n A RAIZ DE %f E  %f \n", numero, sqrt(numero));
    }
}