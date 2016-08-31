#include <stdio.h>

int exercicionove() {
    int pri, seg;
    printf("DIGITE O PRIMEIRO NUMERO\n");
    scanf("%d", &pri);
    printf("DIGITE O SEGUNDO NUMERO\n");
    scanf("%d", &seg);
    if (pri > seg) {
        printf("\n %d  E MAIOR QUE %d \n", pri, seg);
    } else {
        printf("\n %d  E MAIOR QUE %d \n", seg, pri);
    }
}