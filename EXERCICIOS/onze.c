#include <stdio.h>

int exercicioonze(){

    int nota;
    printf("\n DIGITE SUA NOTA\n");
    scanf("%d",&nota);

    switch (nota){
        case 10:
        case 9:
            printf ("TIROU A\n");
            break;
        case 8:
        case 7:
            printf ("TIROU B\n");
            break;
        case 6:
            printf ("TIROU C\n");
            break;
        case 5:
            printf ("TIROU C, QUASE REPROVADO...\n");
            break;
        default:
            printf ("REPROVADO(\n");
            break;
    }

}