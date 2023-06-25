/*
    Atividade 15: Faça um programa que receba como entrada o ano corrente e o nome de
                  dois arquivos: um de entrada e outro de saída. Cada linha do arquivo de
                  entrada contém o nome de uma pessoa (ocupando 40 caracteres) e o
                  seu ano de nascimento. O programa deverá ler o arquivo de entrada e
                  gerar um arquivo de saída onde aparece o nome da pessoa seguida por
                  uma string que representa a sua idade.
                        - Se a idade for menor do que 18 anos, escreva “menor de idade”;
                        - Se a idade for maior do que 18 anos, escreva “maior de idade”;
                        - Se a idade for igual a 18 anos, escreva “entrando na maior idade”.
    Por Luís H.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pessoa 
{
    char nome[41];
    int anoNascimento;
};

void escreverIdade(struct Pessoa pessoa, int anoCorrente, FILE *arquivoSaida) 
{
    int idade = anoCorrente - pessoa.anoNascimento;

    if(idade < 18) 
    {
        fprintf(arquivoSaida, "%s: menor de idade\n", pessoa.nome);
    } 
    else if(idade > 18) 
    {
        fprintf(arquivoSaida, "%s: maior de idade\n", pessoa.nome);
    }
    else 
    {
        fprintf(arquivoSaida, "%s: entrando na maior idade\n", pessoa.nome);
    }
}

int main() 
{
    int anoCorrente;
    char nomeArquivoEntrada[100];
    char nomeArquivoSaida[100];
    FILE *arquivoEntrada, *arquivoSaida;
    struct Pessoa pessoa;

    printf("Digite o ano corrente: ");
    scanf("%d", &anoCorrente);

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", nomeArquivoEntrada);

    arquivoEntrada = fopen(nomeArquivoEntrada, "r");
    if(arquivoEntrada == NULL) 
    {
        printf("Erro ao abrir o arquivo de entrada.\n");
        exit(1);
    }

    printf("Digite o nome do arquivo de saida: ");
    scanf("%s", nomeArquivoSaida);

    arquivoSaida = fopen(nomeArquivoSaida, "w");
    
    if(arquivoSaida == NULL)
    {
        printf("Erro ao abrir o arquivo de saida.\n");
        fclose(arquivoEntrada);
        exit(1);
    }

    //Lendo o arquivo de entrada, calculando a idade e escrevendo no arquivo de saída
    while(fscanf(arquivoEntrada, "%40s %d", pessoa.nome, &pessoa.anoNascimento) != EOF)
    {
        escreverIdade(pessoa, anoCorrente, arquivoSaida);
    }

    fclose(arquivoEntrada);
    fclose(arquivoSaida);

    printf("Arquivo de saida gerado com sucesso.\n");

    return 0;
}
