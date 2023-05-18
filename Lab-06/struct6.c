/*
   Atividade 6: Faça um programa que realize a leitura dos seguintes dados relativos a um conjunto de
		alunos: Matricula, Nome, Código da Disciplina, Nota1 e Nota2. Considere uma turma de até
		10 alunos. Após ler todos os dados digitados, e depois de armazena-los em um vetor de
		estrutura, exibir na tela a listagem final dos alunos com as suas respectivas medias finais
		(use uma média ponderada: Nota1 com peso = 1.0 e Nota2 com peso = 2.0).
   Por Luís H.
*/
#include <stdio.h>

#define MAX_ALUNOS 10

float calcularMedia(float nota1, float nota2);

struct Aluno 
{
    char nome[100];
    int matricula;
    int codigoDisciplina;
    float nota1;
    float nota2;
};

int main() 
{
    struct Aluno alunos[MAX_ALUNOS];
    int numAlunos;
    int i;
    float media;

    printf("Digite o numero de alunos (até %d): ", MAX_ALUNOS);
    scanf("%d", &numAlunos);

    printf("\n");

    // Leitura dos dados dos alunos
    for(i = 0; i < numAlunos; i++) 
    {
        printf("Aluno %d:\n", i + 1);

        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Nome: ");
        scanf(" %[^\n]", alunos[i].nome);

        printf("Codigo da Disciplina: ");
        scanf("%d", &alunos[i].codigoDisciplina);

        printf("Nota 1: ");
        scanf("%f", &alunos[i].nota1);

        printf("Nota 2: ");
        scanf("%f", &alunos[i].nota2);

        printf("\n");
    }

    printf("Listagem final dos alunos:\n");

    // Exibição da lista final com as médias ponderadas
    for(i = 0; i < numAlunos; i++) 
    {
        media = calcularMedia(alunos[i].nota1, alunos[i].nota2);

        printf("Aluno: %s\n", alunos[i].nome);
        printf("Matricula: %d\n", alunos[i].matricula);
        printf("Codigo da Disciplina: %d\n", alunos[i].codigoDisciplina);
        printf("Media Final: %.2f\n", media);
        printf("\n");
    }

    return 0;
}

float calcularMedia(float nota1, float nota2) //Calcula a média 
{
    
    return ((nota1 * 1.0) + (nota2 * 2.0)) / 3.0;
}
