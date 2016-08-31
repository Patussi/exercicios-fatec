#include <stdio.h>
#include <math.h>

int exerciciosete() {
    double n;
    printf("DIGITE UM NUMERO\n");
    scanf("%lf", &n);
    if (n < 0) {
        printf("%lf^2 = %lf", n, pow(n, 2));
    } else {
        printf("sqrt(%lf) = %lf\n", n, sqrt(n));
    }
}