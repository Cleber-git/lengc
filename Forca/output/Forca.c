#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include "funções.h"

int main()
{

    char palavra_secreta[15];

    escolhe_palavra(palavra_secreta);

    forca (palavra_secreta);

    return 0;
}
