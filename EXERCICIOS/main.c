
#include "um.c"
#include "dois.c"
#include "tres.c"
#include "quatro.c"
#include "cinco.c"
#include "seis.c"
#include "sete.c"
#include "oito.c"
#include "nove.c"

int main (){
    int problema;
    printf("\n DIGITE O NUMERO DO EXERCICIO\n");
    scanf("%d",&problema);

    if(problema == 1){
        exercicioum();
    }
    if(problema == 2){
        exerciciodois();
    }
    if(problema == 3){
        exerciciotres();
    }
    if(problema == 4){
        exercicioquatro();
    }
    if(problema == 5){
        exerciciocinco();
    }
    if(problema == 6){
        exercicioseis();
    }
    if(problema == 7){
        exerciciosete();
    }
    if(problema == 8){
        exerciciooito();
    }
    if(problema == 9){
        exercicionove();
    }


    return 0;

}