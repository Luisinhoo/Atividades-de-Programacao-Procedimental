/*
    Atividade 21: Crie um programa que receba como entrada o número de alunos de uma
                  disciplina. Aloque dinamicamente em uma estrutura para armazenar as
                  informações a respeito desses alunos: nome do aluno e sua nota final.
                  Use nomes com no máximo 40 caracteres. Em seguida, salve os dados
                  dos alunos em um arquivo binário. Por fim, leia o arquivo e mostre o
                  nome do aluno com a maior nota.
    Por Luís H.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOME 40

struct Aluno 
{
    char nome[MAX_NOME + 1];
    float nota;
};

int main() 
{
    int numAlunos;
    struct Aluno *alunos;
    FILE *file;
    struct Aluno alunoMax;
    int i;

    printf("Digite o numero de alunos: ");
    scanf("%d", &numAlunos);

    //Aloca dinamicamente o vetor de alunos
    alunos = (struct Aluno*) malloc(numAlunos * sizeof(struct Aluno));

    //Lê os nomes e notas dos alunos
    for(i = 0; i < numAlunos; i++) 
    {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf(" %[^\n]s", alunos[i].nome);

        printf("Digite a nota final do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota);
    }

    file = fopen("alunos.bin", "wb");

    if(file == NULL) 
    {
        printf("Erro ao criar o arquivo!\n");
        exit(1);
    }

    fwrite(alunos, sizeof(struct Aluno), numAlunos, file);

    fclose(file);

    file = fopen("alunos.bin", "rb");

    if (file == NULL) 
    {
        printf("Erro ao abrir o arquivo!\n");
        exit(1);
    }

    //Lê os dados do arquivo e encontra o aluno com a maior nota
    alunoMax.nota = 0;

    for(i = 0; i < numAlunos; i++) 
    {
        fread(&alunos[i], sizeof(struct Aluno), 1, file);

        if(alunos[i].nota > alunoMax.nota) 
        {
            alunoMax = alunos[i];
        }
    }

    fclose(file);

    //Exibe o nome do aluno com a maior nota
    printf("Aluno com a maior nota: %s\n", alunoMax.nome);

    free(alunos);
    alunos = NULL;

    return 0;
}
