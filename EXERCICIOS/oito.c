#include <stdio.h>

int exerciciooito() {
    int n, num;
    printf("DIGITE UM NUMERO\n");
    scanf("%d", &n);
    num= n%3;
    if (num != 0) {
        printf("\n %d NAO E MULTIPLO DE 3", n);
    } else {
        printf("\n %d E MULTIPLO DE 3", n);
    }
}