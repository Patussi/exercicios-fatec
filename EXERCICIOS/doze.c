#include <stdio.h>

int exerciciodoze() {
    int pri, seg;
    printf("DIGITE O PRIMEIRO NUMERO\n");
    scanf("%d", &pri);
    printf("DIGITE O SEGUNDO NUMERO\n");
    scanf("%d", &seg);
    (pri > seg) ? printf("\n %d E MAIOR QUE %d\n", pri, seg):printf("\n %d E MAIOR QUE %d\n", seg, pri);

}