/*
    Atividade 8: Faça um programa que leia o conteúdo de um arquivo e crie um arquivo
                 com o mesmo conteúdo, mas com todas as letras minúsculas
                 convertidas para maiúsculas. Os nomes dos arquivos serão fornecidos,
                 via teclado, pelo usuário. A função que converte maiúscula para
                 minúscula é o toupper(). Ela é aplicada em cada caractere da string.
    Por Luís H.
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //Para a utilização da função tolower();

int main() 
{
    FILE *arquivoEntrada;
    FILE *arquivoSaida;
    char nomeArquivoEntrada[100], nomeArquivoSaida[100];
    char c;
    
    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", nomeArquivoEntrada);
    
    printf("Digite o nome do arquivo de saida: ");
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
        c = toupper(c);
        fputc(c, arquivoSaida);
    }
    
    fclose(arquivoEntrada);
    fclose(arquivoSaida);

    printf("Arquivo criado com sucesso!");
    return 0;
}
