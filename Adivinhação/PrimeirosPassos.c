#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "pp.h"


int main(){    

    Welcome();
    
    // declarando variável
    
    // int c = 1;
    int prova;
    int secret_Number = Random();

    Random();

    printf("[1]- Fácil\n[2]- Médio\n[3]- Difícil\n");


    int tentativas = hard();

    prova = game(secret_Number, prova, tentativas);


    if(prova != 1){
        bad();
    }
    printf("Número da máquina: %d\n", secret_Number);
    
    return 0;
}
