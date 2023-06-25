/*
    Atividade 28:   Faça um programa que recebe como entrada o nome de um arquivo de
                    entrada e o nome de um arquivo de saída. Cada linha do arquivo de
                    entrada possui colunas de tamanho de 30 caracteres. No arquivo de
                    saída deverá ser escrito o arquivo de entrada de forma inversa. Veja um
                    exemplo:
                                Arquivo de entrada:
                                Hoje eh dia de prova de PP
                                A prova esta muito facil
                                Vou tirar uma boa nota
                                
                                Arquivo de saida:
                                Aton aob amu rarit uov
                                Licaf otium atse avorp A
                                PP ed avorp ed aid he ejoH
    Por Luís H.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//30 caracteres + 1 caractere para o '\n'
#define MAX_LENGTH 31

void inverterString(char *string) 
{
    int tamanho = strlen(string);
    int i, j;

    for(i = 0, j = tamanho - 1; i < j; i++, j--) 
    {
        char temp = string[i];
        string[i] = string[j];
        string[j] = temp;
    }
}

int main() 
{
    FILE *arquivoEntrada;
    FILE *arquivoSaida;
    char nomeArquivoEntrada[100];
    char nomeArquivoSaida[100];
    char linha[MAX_LENGTH];

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", nomeArquivoEntrada);

    printf("Digite o nome do arquivo de saida: ");
    scanf("%s", nomeArquivoSaida);

    arquivoEntrada = fopen(nomeArquivoEntrada, "r");
    
    if (arquivoEntrada == NULL) 
    {
        printf("Erro ao abrir o arquivo de entrada.\n");
        exit(1);
    }

    arquivoSaida = fopen(nomeArquivoSaida, "w");
    if(arquivoSaida == NULL) 
    {
        printf("Erro ao abrir o arquivo de saida.\n");
        fclose(arquivoEntrada);
        exit(1);
    }

    //Ler cada linha do arquivo de entrada
    while(fgets(linha, MAX_LENGTH, arquivoEntrada) != NULL) 
    {
        //Inverter a linha lida
        inverterString(linha);

        //Escrever a linha invertida no arquivo de saída
        fprintf(arquivoSaida, "%s", linha);
    }

    fclose(arquivoEntrada);
    fclose(arquivoSaida);

    printf("Arquivo de saída criado com sucesso.\n");

    return 0;
}
