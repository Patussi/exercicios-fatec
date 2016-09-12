#include <stdio.h>
#include <math.h>
int exercicioquinze(){
    int xpri, ypri, xseg, yseg,xplano, yplano;
    float dist;
    printf("DIGITE O VALOR DO PRIMEIRO PONTO DO PRIMEIRO PLANO\n");
    scanf("%d", &xpri);
    printf("DIGITE O VALOR DO SEGUNDO PONTO DO PRIMEIRO PLANO\n");
    scanf("%d", &ypri);
    printf("DIGITE O VALOR DO PRIMEIRO PONTO DO SEGUNDO PLANO\n");
    scanf("%d", &xseg);
    printf("DIGITE O VALOR DO SEGUNDO PONTO DO SEGUNDO PLANO\n");
    scanf("%d", &yseg);
    xplano= (xpri - xseg)*(xpri - xseg);
    yplano= (ypri - yseg)*(ypri - yseg);
    dist= sqrt(xplano + yplano);
    printf("\n A DISTANCIA ENTRE OS DOIS PLANOS E DE %.2f\n",dist);

}