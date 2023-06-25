/*
    Atividade 10: Faça um programa que receba o nome de um arquivo de entrada e outro
                  de saída. O arquivo de entrada contém em cada linha o nome de uma
                  cidade (ocupando 40 caracteres) e o seu número de habitantes. O
                  programa deverá ler o arquivo de entrada e gerar um arquivo de saída
                  onde aparece o nome da cidade mais populosa seguida pelo seu número
		          de habitantes.
    Por Luís H.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h> //Para o uso da função strcpy();

int main() 
{
    FILE *arqEntrada;
    FILE *arqSaida;
    char nomeArquivoEntrada[100], nomeArquivoSaida[100];
    char cidade[40];
    char cidadeMaisPopulosa[40];
    int habitantes;
    int maisHabitantes = 0;
    
    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", nomeArquivoEntrada);
    
    printf("Agora digite o nome do arquivo de saida: ");
    scanf("%s", nomeArquivoSaida);
    
    arqEntrada = fopen(nomeArquivoEntrada, "r");
    
    if(arqEntrada == NULL)
    {
        printf("Nao foi possivel abrir o arquivo de entrada!");
        exit(1);
    }
    
    arqSaida = fopen(nomeArquivoSaida, "w");
    
    if(arqSaida == NULL)
    {
        printf("Nao foi possivel abrir o arquivo de saida!");
        fclose(arqEntrada);
        exit(1);
    }
    
    /*
        Lê cada linha do arquivo de entrada usando a função fscanf. 
        A cada iteração do loop, o nome da cidade e o número de habitantes 
        são lidos e armazenados nas variáveis cidade e habitantes, respectivamente, até
        chegar no final do arquivo (EOF).
    */
    while(fscanf(arqEntrada, "%40s%d", cidade, &habitantes) != EOF) 
    {
        if (habitantes > maisHabitantes) 
        {
            strcpy(cidadeMaisPopulosa, cidade);
            maisHabitantes = habitantes;
        }
    }
    
    fprintf(arqSaida, "Cidade mais populosa: %s\n", cidadeMaisPopulosa);
    fprintf(arqSaida, "Numero de habitantes: %d\n", maisHabitantes);
    
    fclose(arqEntrada);
    fclose(arqSaida);
    return 0;
}
