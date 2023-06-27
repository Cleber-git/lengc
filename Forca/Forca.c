#include<stdio.h>
#include<string.h>

//  variáveis globais

char palavrasecreta[20];
int tentativas = 0;
char chutes[26];

void Abertura(){
    printf("\n");
    printf("***********************\n");
    printf("*    JOGO DE FORCA    *\n");
    printf("***********************\n\n");


}


void Chuta(){
    char chute;
    scanf(" %c", &chute);
    chutes[tentativas] = chute;
    tentativas++;
}


int JaChutou(char letra){
    int tem = 0;
    
    for (int j = 0; j < tentativas; j++){
        if (chutes[j] == letra){
            tem = 1;
            break;
        }
    } 
    return tem;
}


void DesenhaForca(char palavrasecreta[20]){
    for(int i = 0; i < strlen(palavrasecreta); i++){
                
        int tem = JaChutou(palavrasecreta[i]);
        
        if (tem){
            printf("%c ", palavrasecreta[i]);
        }else{
            printf("_ ");
        }
    }   
}

void EscolhePalavra(char palavrasecreta[20]){
    sprintf(palavrasecreta, "caja");


}

int main(){

    
    int venceu = 0;
    EscolhePalavra(palavrasecreta);
    Abertura();

    while (!venceu){   
        
        DesenhaForca(palavrasecreta);
        Chuta(chutes, &tentativas);
        printf("\n");
        if (tentativas>5){
            printf("Você escedeu o número de tentativas\n");
            break;
        }        
        
    }
}
