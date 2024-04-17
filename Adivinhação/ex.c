#include <stdio.h>

int main(){

    int inteiro;
    printf("Escolha um número a ser calculado: ");
    scanf("%d", &inteiro);

    for (int i = 1; i <= 10 ; i++){
        printf("%d x %d = %d \n", inteiro, i, inteiro*i);

    }

    return 0;
}
