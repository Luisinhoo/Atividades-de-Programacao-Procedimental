/*
    Atividade 2: Faça um programa que receba do usuário um arquivo texto e mostre na
                 tela quantas linhas esse arquivo possui.
    Por Luís H.
*/
#include <stdio.h>
#include <stdlib.h>

int main() 
{
    FILE *f;
    char nomeArquivo[100];
    char c; //Caractere
    int contador = 0;
    
    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);
    
    f = fopen(nomeArquivo, "r");
    
    if(f == NULL)
    {
        printf("Arquivo nao aberto!");
        exit(1);
    }
    
    while((c = fgetc(f)) != EOF)
    {
        if(c == '\n') //Se o caractere for o \n, incrementamos +1 ao contador
        {
            contador++;
        }
    }
    
    printf("O arquivo possui %d linhas\n", contador);
    
    fclose(f);
    return 0;
}
