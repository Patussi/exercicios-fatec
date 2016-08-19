#include <stdio.h>

int exerciciocinco(){
    int numeroa, numerob;
    printf("\n DIGITE O PRIMEIRO NUMERO\n");
    scanf("%d",&numeroa);
    printf("\n DIGITE O SEGUNDO NUMERO\n");
    scanf("%d",&numerob);
    printf("\n A DIVISAO DE %d POR %d DA %d E SOBRA %d\n", numeroa, numerob, (numeroa / numerob), (numeroa % numerob));
}