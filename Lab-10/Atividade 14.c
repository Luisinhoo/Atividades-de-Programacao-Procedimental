/*
    Atividade 14: Dado um arquivo contendo um conjunto de nome e data de nascimento
                  (DD MM AAAA), isto é, 3 inteiros em sequência), faça um programa que
                  leia o nome do arquivo e a data de hoje e construa outro arquivo
                  contendo o nome e a idade de cada pessoa do primeiro arquivo.
    Por Luís H.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct Pessoa 
{
    char nome[100];
    int dia;
    int mes;
    int ano;
};

void calcularIdade(struct Pessoa pessoa, int diaAtual, int mesAtual, int anoAtual, int *idade) 
{
    *idade = anoAtual - pessoa.ano;
    if((mesAtual < pessoa.mes) || (mesAtual == pessoa.mes) && (diaAtual < pessoa.dia)) 
    {
        *idade -= 1;
    }
}

int main() 
{
    char nomeArquivoEntrada[100];
    char nomeArquivoSaida[100];
    FILE *arquivoEntrada, *arquivoSaida;
    int diaAtual, mesAtual, anoAtual;
    struct Pessoa pessoa;
    int idade;

    //Obtendo a data atual
    time_t t = time(NULL);
    struct tm *dataAtual = localtime(&t);
    diaAtual = dataAtual->tm_mday;
    mesAtual = dataAtual->tm_mon + 1;
    anoAtual = dataAtual->tm_year + 1900;

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", nomeArquivoEntrada);

    
    arquivoEntrada = fopen(nomeArquivoEntrada, "r");
    
    if(arquivoEntrada == NULL) 
    {
        printf("Erro ao abrir o arquivo de entrada.\n");
        exit(1);
    }

    printf("Digite o nome do arquivo de saída: ");
    scanf("%s", nomeArquivoSaida);

    arquivoSaida = fopen(nomeArquivoSaida, "w");
    
    if(arquivoSaida == NULL) 
    {
        printf("Erro ao abrir o arquivo de saida.\n");
        fclose(arquivoEntrada);
        exit(1);
    }

    //Lendo o arquivo de entrada, calculando a idade e escrevendo no arquivo de saída
    while(fscanf(arquivoEntrada, "%s %d %d %d", pessoa.nome, &pessoa.dia, &pessoa.mes, &pessoa.ano) != EOF) 
    {
        calcularIdade(pessoa, diaAtual, mesAtual, anoAtual, &idade);
        fprintf(arquivoSaida, "%s %d\n", pessoa.nome, idade);
    }

    fclose(arquivoEntrada);
    fclose(arquivoSaida);

    printf("Arquivo de saida gerado com sucesso.\n");

    return 0;
}
