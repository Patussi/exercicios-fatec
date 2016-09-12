#include <stdio.h>

int exerciciodezesseis() {
    float valor, custfab, porcdis, impos;
    printf("DIGITE O VALOR DO CARRO\n");
    scanf("%f", &valor);
    porcdis = (valor *28)/100;
    impos =  (valor *45)/100;
    custfab = valor - porcdis - impos;
    printf("\nO CARRO DE VALOR %.2f", valor);
    printf("\nMENOS IMPOSTO %.2f", impos);
    printf("\nMENOS O VALOR DO DISTRIBUIDOR %.2f", porcdis);
    printf("\nTEM CUSTO DE FABRICA DE %.2f\n", custfab);

}