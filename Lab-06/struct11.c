/*
   Atividade 11: Faça um programa que leia os dados de 10 alunos (Nome, matricula, Média Final),
		 armazenando em um vetor. Uma vez lidos os dados, divida estes dados em 2 novos vetores,
		 o vetor dos aprovados e o vetor dos reprovados, considerando a média mínima para a
		 aprovação como sendo 5.0. Exibir na tela os dados do vetor de aprovados, seguido dos dados
		 do vetor de reprovados.
   Por Luís H.
*/
#include <stdio.h>
#define MAX_ALUNOS 10

struct Aluno 
{
    char nome[100];
    int matricula;
    float mediaFinal;
};
void exibirAlunos(struct Aluno alunos[], int numAlunos);

int main() 
{
    struct Aluno alunos[MAX_ALUNOS];
    struct Aluno aprovados[MAX_ALUNOS];
    struct Aluno reprovados[MAX_ALUNOS];
    int numAlunos = 10;
    int numAprovados = 0;
    int numReprovados = 0;
    int i;

    printf("Digite os dados dos alunos:\n");

    for(i = 0; i < numAlunos; i++) 
    {
        printf("Aluno %d:\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]", alunos[i].nome);

        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Media Final: ");
        scanf("%f", &alunos[i].mediaFinal);

        printf("\n");
    }

    for(i = 0; i < numAlunos; i++) 
    {
        if(alunos[i].mediaFinal >= 5.0) 
        {
            aprovados[numAprovados] = alunos[i];
            numAprovados++;
        }
        else 
        {
            reprovados[numReprovados] = alunos[i];
            numReprovados++;
        }
    }

    printf("Alunos Aprovados:\n");
    exibirAlunos(aprovados, numAprovados);

    printf("Alunos Reprovados:\n");
    exibirAlunos(reprovados, numReprovados);

    return 0;
}

void exibirAlunos(struct Aluno alunos[], int numAlunos) 
{
    int i;
    for(i = 0; i < numAlunos; i++) 
    {
        printf("Nome: %s\n", alunos[i].nome);
        printf("Matrícula: %d\n", alunos[i].matricula);
        printf("Média Final: %.2f\n", alunos[i].mediaFinal);
        printf("\n");
    }
}
