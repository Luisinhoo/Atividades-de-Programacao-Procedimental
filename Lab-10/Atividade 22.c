/*
    Atividade 22: Faça um programa que recebe como entrada o nome de um arquivo de
                  entrada e o nome de um arquivo de saída. O arquivo de entrada contém
                  o nome de um aluno ocupando 40 caracteres e três inteiros que indicam
                  suas notas. O programa deverá ler o arquivo de entrada e gerar um
                  arquivo de saída onde aparece o nome do aluno e as suas notas em
                  ordem crescente.
    Por Luís H.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOME 40

struct Aluno
{
    char nome[MAX_NOME + 1];
    int notas[3];
};

//Função de comparação para a ordenação das notas em ordem crescente
int compararNotas(const void *a, const void *b) 
{
    const int *nota1 = ((struct Aluno*)a)->notas;
    const int *nota2 = ((struct Aluno*)b)->notas;
    int i;

    //Ordena com base na primeira nota, se forem iguais, utiliza a segunda nota e assim por diante
    for(i = 0; i < 3; i++) 
    {
        if(nota1[i] != nota2[i]) 
        {
            return nota1[i] - nota2[i];
        }
    }

    return 0; //Caso todas as notas sejam iguais
}

int main() 
{
    char nomeArquivoEntrada[100];
    char nomeArquivoSaida[100];
    FILE *arquivoEntrada;
    FILE *arquivoSaida;
    struct Aluno alunos[100];
    int numAlunos;
    int i, j;

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", nomeArquivoEntrada);

    printf("Digite o nome do arquivo de saída: ");
    scanf("%s", nomeArquivoSaida);

    arquivoEntrada = fopen(nomeArquivoEntrada, "r");

    if(arquivoEntrada == NULL) 
    {
        printf("Erro ao abrir o arquivo de entrada!\n");
        exit(1);
    }

    //Lê os dados dos alunos do arquivo de entrada
    numAlunos = 0;
    
    while(fscanf(arquivoEntrada, " %[^\n]s", alunos[numAlunos].nome) == EOF) 
    {
        for(i = 0; i < 3; i++) 
        {
            fscanf(arquivoEntrada, "%d", &alunos[numAlunos].notas[i]);
        }
        numAlunos++;
    }

    fclose(arquivoEntrada);

    //Ordena os alunos com base nas notas em ordem crescente
    qsort(alunos, numAlunos, sizeof(struct Aluno), compararNotas);

    arquivoSaida = fopen(nomeArquivoSaida, "w");

    if(arquivoSaida == NULL) 
    {
        printf("Erro ao abrir o arquivo de saida!\n");
        exit(1);
    }

    //Escreve os dados dos alunos ordenados no arquivo de saída
    for(i = 0; i < numAlunos; i++) 
    {
        fprintf(arquivoSaida, "%s ", alunos[i].nome);
        
        for(j = 0; j < 3; j++) 
        {
            fprintf(arquivoSaida, "%d ", alunos[i].notas[j]);
        }
        fprintf(arquivoSaida, "\n");
    }

    fclose(arquivoSaida);

    printf("Arquivo de saida criado com sucesso!\n");

    return 0;
}
