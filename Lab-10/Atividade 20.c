/*
    Atividade 20: Crie um programa que receba como entrada o número de alunos de uma
                  disciplina. Aloque dinamicamente dois vetores para armazenar as
                  informações a respeito desses alunos. O primeiro vetor contém o nome
                  dos alunos e o segundo contém suas notas finais. Crie um arquivo que
                  armazene, a cada linha, o nome do aluno e sua nota final. Use nomes
                  com no máximo 40 caracteres. Se o nome não contém 40 caracteres,
                  complete com espaço em branco.
    Por Luís H.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOME 40

int main() 
{
    int numAlunos;
    char **nomes;
    float *notas;
    FILE *file;
    int len;
    int i, j;

    printf("Digite o numero de alunos: ");
    scanf("%d", &numAlunos);

    //Aloca dinamicamente os vetores
    nomes = (char**) malloc(numAlunos * sizeof(char*));
    notas = (float*) malloc(numAlunos * sizeof(float));

    //Lê os nomes e notas dos alunos
    for(i = 0; i < numAlunos; i++) 
    {
        nomes[i] = (char*) malloc((MAX_NOME + 1) * sizeof(char));

        printf("Digite o nome do aluno %d: ", i + 1);
        scanf(" %[^\n]s", nomes[i]);

        printf("Digite a nota final do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    //Cria o arquivo e escreve as informações
    file = fopen("alunos.txt", "w");

    if(file == NULL) 
    {
        printf("Erro ao criar o arquivo!\n");
        exit(1);
    }

    for(i = 0; i < numAlunos; i++) 
    {
        //Completa o nome com espaços em branco se tiver menos de 40 caracteres
        len = strlen(nomes[i]);

        for(j = len; j < MAX_NOME; j++) 
        {
            nomes[i][j] = ' ';
        }

        nomes[i][MAX_NOME] = '\0';

        //Escreve o nome e a nota no arquivo
        fprintf(file, "%s %.2f\n", nomes[i], notas[i]);
    }

    fclose(file);

    //Libera a memória alocada
    for(i = 0; i < numAlunos; i++) 
    {
        free(nomes[i]);
    }

    free(nomes);
    nomes = NULL;
    free(notas);
    notas = NULL;

    return 0;
}
