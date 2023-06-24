#include<stdio.h>
#include<string.h>

int main(){

    char palavrasecreta[20];
    sprintf(palavrasecreta, "MELANCIA");

    int ganhou = 0;

    int tentativas = 0;
    char chutes[26];
    do{   
        int tem = 0;
        char chute;
        scanf(" %c", &chute);

        for (int i = 0; i < strlen(palavrasecreta); i++){
            
            for (int j = 0; j < tentativas; j++){
                chutes[i] = chute;
                if(chutes[j] == palavrasecreta[i]){
                    tem = 1;
                }
                
            }
            
        }
        
    
            
    }while (!ganhou);
}
