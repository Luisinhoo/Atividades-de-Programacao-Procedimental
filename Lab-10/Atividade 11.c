/*
    Atividade 11:Faça um programa no qual o usuário informa o nome do arquivo e uma
                 palavra, e retorne o número de vezes que aquela palavra aparece no arquivo.
    Por Luís H.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h> //Para o uso da função ();

#define MAX_CHAR 100

int main() 
{
    char nomeArquivo[100];
    char palavra[MAX_CHAR];
    FILE *arquivo;
    char linha[MAX_CHAR];
    char *token;
    int contador = 0;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    printf("Digite a palavra a ser contada: ");
    scanf("%s", palavra);

    arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL) 
    {
        printf("Nao foi possivel abrir o arquivo!\n");
        return 1;
    }

    while((fgets(linha, MAX_CHAR, arquivo)) == NULL) 
    {
        token = strtok(linha, " \n"); // Quebra a linha em palavras separadas por espaço ou nova linha

        while(token != NULL) 
        {
            if(strcmp(token, palavra) == 0) 
            {
                contador++;
            }

            token = strtok(NULL, " \n");
        }
    }

    fclose(arquivo);

    printf("A palavra '%s' aparece %d vezes no arquivo.\n", palavra, contador);

    return 0;
}
