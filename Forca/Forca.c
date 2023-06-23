#include<stdio.h>
#include<string.h>

int main(){

    char palavrasecreta[20];

    sprintf(palavrasecreta, "MELANCIA");
    int ganhou = 0;

    int tentativas = -1;
    char chutes[26];
    do
    {
        
        char chute;
        scanf(" %c", &chute);


        tentativas ++;
        chutes[tentativas] = chute;
        for (int i = 0; i < strlen(palavrasecreta); i++){
            int acertou = 0;
            for (int j = 0; j < tentativas; j++){
                if (chutes[j] == palavrasecreta[i]){
                    acertou = 1;
                    break;
                }
            }
            
        
            if (acertou){
                printf("%c ", palavrasecreta[i]);
            }else{
                printf("_ ");
            }   
        }
            printf("\n");
            
    }while (!ganhou);
}
