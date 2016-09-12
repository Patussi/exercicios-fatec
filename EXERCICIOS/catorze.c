#include <stdio.h>

int exerciciocatorze() {
    int notaa, notab, notac, media;
    printf("DIGITE A PRIMEIRA NOTA\n");
    scanf("%d", &notaa);
    printf("DIGITE A SEGUNDA NOTA\n");
    scanf("%d", &notab);
    printf("DIGITE A TERCEIRA NOTA\n");
    scanf("%d", &notac);
    media= (notaa+notab+notac)/3;
    printf("\n SUA NOTA MEDIA E DE %d\n",media);

}
