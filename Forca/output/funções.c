#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include "funções.h"

void verifica(char arquivo[20], char palavras[15])
{
//  Espaço para variaveis  
    FILE *p;
    int tamanho=0;
    int conta=0;

//  Abrindo arquivo
    p = fopen(arquivo, "r");
    if(p==NULL)
    {
        puts("Não foi possivel acessar o arquivo");
        exit(1);
    }

//  Selecionando palavra
    fscanf(p,"%d", &tamanho);
    srand(time(0));
    conta = abs (rand()%tamanho);

    for(int i = 0; i<=conta;i++)
    {
        fscanf(p,"%s", palavras);
    }
    fclose(p);
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
            char tipo_arq[20] = "profissões.txt";
            verifica(tipo_arq, palavras);
            break;
        }

         case 2:
        {
            char tipo_arq[15] = "frutas.txt";
            verifica(tipo_arq, palavras);
            break;
        }

         case 3:
        {
            char tipo_arq[15] = "estados.txt";
            verifica(tipo_arq, palavras);
            break;
        }

    }
}

int enforcou(char palavras[15], char chutes[26], int tenta)
{
  //variaveis
    int tem=0;
    int tanto=0;

  //Laço

    for (int i=0;i<tenta;i++)
    {
        tem=0;
        for(int j=0;j<strlen(palavras);j++)
        {
            if(chutes[i]==palavras[j])
            {
                tem=1;
                break;
            }
        }

        if(!tem)
        {
            tanto++;
        }
    }

    if(tanto>6)
    {
       return 1;
    }

    else
    {
       return 0;
    }
}

int acertou (char palavras[15], char chutes[26],int* t)
{
  //Variaveis  

    char compara[15];
     for (int i = 0; i < 15; i++) 
     {
        compara[i] = '\0';
     }
    int retorno=1;

    for (int i=0;i<strlen(palavras);i++)
    {
        for (int j=0;j<=(*t);j++)
        {
            if(palavras[i]==chutes[j])
            {
                compara[i]=chutes[j];
                break;
            }
        }
    }

     for (int i = 0; i < strlen(palavras); i++)
    {
        if (palavras[i] != compara[i])
        {
            retorno = 0;
            break;
        }
    }

    return retorno;
}

void forca(char palavras[15]) 
{
  //Espaço para variaveis
    int t = strlen(palavras);
    int tentativas;
    char chutes[26];
  //Laço 

    do
    {
        
        for (int i=0;i<t;i++)
        {
            int achou=0;
            for(int j=0;j<tentativas;j++)
            {
                if(palavras[i]==chutes[j])
                {
                    achou=1;
                    break;
                }
            }

            if (!achou)
            {
                printf("_ ");
            }

            else
            {
                printf("%c ", palavras[i]);
            }
            
        }
        printf("\n");
        printf("Digite aqui:");
        scanf(" %c", &chutes[tentativas]);
        tentativas++;
        printf("\n");
        

    }while(!acertou(palavras, chutes,&tentativas) && !enforcou(palavras, chutes, tentativas));
}

