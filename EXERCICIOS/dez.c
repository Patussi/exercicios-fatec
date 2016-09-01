#include <stdio.h>

int exerciciodez(){
    int pri, seg, ter;
    printf("DIGITE O PRIMEIRO NUMERO\n");
    scanf("%d", &pri);
    printf("DIGITE O SEGUNDO NUMERO\n");
    scanf("%d", &seg);
    printf("DIGITE O TERCEIRO NUMERO\n");
    scanf("%d", &ter);
    if (pri > seg || pri > ter){
        if (seg > ter){
            printf("\n A ORDEM E %d > %d > %d", pri, seg, ter);
        }
        else{
            printf("\n A ORDEM E %d > %d > %d", pri, ter, seg);
        }

    }
    if (pri < seg || pri < ter){
        if (seg > ter){
            printf("\n A ORDEM E %d > %d > %d", seg, ter, pri);
        }
        else{
            printf("\n A ORDEM E %d > %d > %d", ter, seg, pri);
        }

    }
}