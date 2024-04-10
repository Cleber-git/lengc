#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

void verifica(FILE*p)
{
    if(p==NULL)
    {
        puts("Não foi possivel acessar o arquivo");
    }
}

char* abr_arquivo(FILE*p, char nome_arquivo[15], char palavra[15])
{
    int tamanho;
    fscanf(p,"%d", &tamanho);
    srand(time(0));
    int conta = rand() % tamanho;

    for (int i = 0; i <= conta; i++)
    {
        fscanf(p,nome_arquivo,palavra);
    }

    return palavra;
}

void escolhe_palavra(char palavras[15])
{
    //Espaço para variaveis
    int tdp=0;
    // Mensagem de abertura
    puts("Escolha o tipo de palavra que quer jogar!");
    puts("");
    puts("Para PROFISSÃO tecle (1); FRUTAS (2); Estados(3)");
    scanf("%d", &tdp);

    // Selecionando arquivos

    switch(tdp)
    {
        case 1:
        {
            FILE* p = fopen("profissões.txt", "r");
            verifica(p);

            abr_arquivo(p, "profissões.txt", palavras);

        }
    }
}

int main(){

    char palavra_secreta[15];
    escolhe_palavra(palavra_secreta);

  //  int ganhou = 0;
   // int enforcou = 0;

   // int tentativas = 0;
  //  char chutes[26];

    // do{   
    //     int tem = 0;
    //     char chute;
    //     scanf(" %c", &chute);

    //     for (int i = 0; i < strlen(palavrasecreta); i++){
            
    //         for (int j = 0; j < tentativas; j++){
    //             chutes[i] = chute;
    //             if(chutes[j] == palavrasecreta[i]){
    //                 tem = 1;
    //             }
                
    //         }
            
    //     }
        
    
            
    // }while (!ganhou && !enforcou);

    return 0;
}
