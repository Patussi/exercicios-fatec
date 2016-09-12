#include <stdio.h>
#include <math.h>

int exerciciotreze() {
    int a, b, c, r, s, d;
    printf("DIGITE O VALOR DE A\n");
    scanf("%d", &a);
    printf("DIGITE O VALOR DE B\n");
    scanf("%d", &b);
    printf("DIGITE O VALOR DE C\n");
    scanf("%d", &c);
    r = (a+b)*(a+b);
    s = (b+c)*(b+c);
    d = (r+s)/2;
    printf("\n OS VALOR DE R: %d  VALOR DE S: %d E VALOR DE D: %d\n", r, s, d);

}
