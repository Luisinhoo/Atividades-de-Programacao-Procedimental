/*
    Atividade 5: Faça um programa que receba do usuário um arquivo texto e um
                 caractere. Mostre na tela quantas vezes aquele caractere ocorre dentro
                 do arquivo.
    Por Luís H.
*/
#include <stdio.h>
#include <stdlib.h>

int main() 
{
    FILE *f;
    char nomeArquivo[100];
    char c;
    char caractere;
    int quantidadeCaracteres = 0;
    
    printf("Digite o caractere para a verificacao: ");
    scanf("%c", &caractere);
    
    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);
    
    fflush(stdin);
    
    f = fopen(nomeArquivo, "r");
    
    if(f == NULL)
    {
        printf("Arquivo nao aberto!");
        exit(1);
    }
    
    while((c = fgetc(f)) != EOF) 
    {
        if(c == caractere)
        {
            quantidadeCaracteres++;
        }
    }
    
    printf("No arquivo lido, o caractere %c aparece %d vezes\n", caractere, quantidadeCaracteres);
    
    fclose(f);
    return 0;
}
