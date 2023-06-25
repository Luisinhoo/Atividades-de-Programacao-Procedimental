/*
    Atividade 7: Faça um programa que receba do usuário um arquivo texto. Crie outro
                 arquivo texto contendo o texto do arquivo de entrada, mas com as
                 vogais substituídas por ‘*’.
    Por Luís H.
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //Para a utilização da função tolower();

int main()
{
    FILE *arquivoEntrada;
    FILE *arquivoSaida;
    char nomeArquivoEntrada[100];
    char nomeArquivoSaida[100];
    char c;

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", nomeArquivoEntrada);

    printf("Digite o nome do arquivo de saída: ");
    scanf("%s", nomeArquivoSaida);

    arquivoEntrada = fopen(nomeArquivoEntrada, "r");

    if(arquivoEntrada == NULL) 
    {
        printf("Nao foi possivel abrir o arquivo de entrada.\n");
        exit(1);
    }

    arquivoSaida = fopen(nomeArquivoSaida, "w");

    if (arquivoSaida == NULL) 
    {
        printf("Nao foi possivel criar o arquivo de saída.\n");
        exit(1);
    }

    while((c = fgetc(arquivoEntrada)) != EOF) 
    {
        c = tolower(c); //Converte o caractere para minúsculo

        if((c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u')) 
        {
            fputc('*', arquivoSaida);
        }
        else 
        {
            fputc(c, arquivoSaida);
        }
    }

    fclose(arquivoEntrada);
    fclose(arquivoSaida);

    printf("Arquivo de saida criado com sucesso.\n");

    return 0;
}
