
#include "um.c"
#include "dois.c"
#include "tres.c"
#include "quatro.c"
#include "cinco.c"
#include "seis.c"
#include "sete.c"


int main (){
    int problema;
    printf("\n DIGITE O NUMERO DO EXERCICIO\n");
    scanf("%d",&problema);

    if(problema ==01){
        exercicioum();
    }
    if(problema ==02){
        exerciciodois();
    }
    if(problema ==03){
        exerciciotres();
    }
    if(problema ==04){
        exercicioquatro();
    }
    if(problema ==05){
        exerciciocinco();
    }
    if(problema ==06){
        exercicioseis();
    }
    if(problema ==07){
        exerciciosete();
    }

    return 0;

}