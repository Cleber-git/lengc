#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

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

void forca(char palavras[15])
{
  //Espaço para variaveis
    int t = strlen(palavras);
    int acertou=0;
    int enforcou=0;
    int tentativas;
    char chutes[26];
  //Laço 

    do
    {
        printf("Digite aqui:");
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

        scanf(" %c", &chutes[tentativas]);
        tentativas++;
        printf("\n");

    }while(!acertou && !enforcou);
}
int main()
{

    char palavra_secreta[15];

    escolhe_palavra(palavra_secreta);

    forca (palavra_secreta);

    return 0;
}
