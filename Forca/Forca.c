#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

void verifica(FILE**p, char arquivo[20])
{
    *p = fopen(arquivo, "r");
    if(*p==NULL)
    {
        puts("Não foi possivel acessar o arquivo");
        return 1;
    }

    
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
            FILE* p;
            verifica(&p, "profissões.txt");


        }
    }
}

int main(){

    char palavra_secreta[15];
    escolhe_palavra(palavra_secreta);

    return 0;
}
