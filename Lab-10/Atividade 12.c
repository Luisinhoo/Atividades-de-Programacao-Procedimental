/*
    Atividade 12: Abra um arquivo texto, calcule e escreva o número de caracteres, o
                 número de linhas e o número de palavras neste arquivo. Escreva
                 também quantas vezes cada letra ocorre no arquivo (ignorando letras
                 com acento). Obs.: palavras são separadas por um ou mais caracteres
                 espaço, tabulação ou nova linha.
    Por Luís H.
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_CHAR 100

int main() 
{
    char nomeArquivo[100];
    FILE *arquivo;
    char c;
    int numCaracteres = 0;
    int numLinhas = 0;
    int numPalavras = 0;
    int letras[26] = {0}; //Contador para cada letra do alfabeto (ignorando acentos)
    int i;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    arquivo = fopen(nomeArquivo, "r");

    if(arquivo == NULL)
    {
        printf("Nao foi possivel abrir o arquivo!\n");
        exit(1);
    }

    while((c = fgetc(arquivo)) != EOF) 
    {
        numCaracteres++;

        if(c == '\n') 
        {
            numLinhas++;
        }

        if(isspace(c)) 
        {
            numPalavras++;
        }

        if(isalpha(c)) 
        {
            c = tolower(c);
            letras[c - 'a']++;
        }
    }

    numPalavras++; //Adiciona uma palavra para considerar a última palavra no arquivo

    fclose(arquivo);

    printf("Numero de caracteres: %d\n", numCaracteres);
    printf("Numero de linhas: %d\n", numLinhas);
    printf("Numero de palavras: %d\n", numPalavras);

    printf("Ocorrencias de letras:\n");
    for(i = 0; i < 26; i++) 
    {
        printf("%c: %d\n", 'a' + i, letras[i]);
    }

    return 0;
}
