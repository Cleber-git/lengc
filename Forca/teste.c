#include <stdio.h>


int soma(int nums[], int tam){
    int total = 0;
    for (int i = 0; i < tam; i++){
        total += nums[i];
    }
    

    return total;
}



int main(){

    int lista[5] = {3, 18, 3, 5, 10}; 

    int total = soma(lista, 5);
    printf("%d\n", total);
}