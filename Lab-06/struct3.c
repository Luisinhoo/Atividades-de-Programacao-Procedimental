/*
   Atividade 3: Construa uma estrutura aluno com nome, número de matrıcula e curso. Leia do usuário a
                informação de 5 alunos, armazene em um vetor dessa estrutura e imprima os dados na tela.
   Por Luís H.
*/
#include <stdio.h>

struct dadosAluno
{
    char nome[100];
    char curso[100];
    int numeroM; //Número de matrícula
};
typedef struct dadosAluno Aluno;

int main()
{
    Aluno estudante[5];
    int i;
  
    for(i = 0; i < 5; i++)
    {
        printf("Digite o nome do %dº aluno: ", i + 1);
        scanf("%s", estudante[i].nome);
    
        printf("Digite a matrícula do %dº alunos: ", i + 1);
        scanf("%d", &estudante[i].numeroM);
    
        printf("Digite o curso do %dº aluno: ", i + 1);
        scanf("%s", estudante[i].curso);
        printf("\n");
    }
    
    for(i = 0; i < 5; i++)
    {
        printf("%dº aluno: \n", i+1);
        printf("Nome: %s\n", estudante[i].nome);
        printf("Matricula: %d\n", estudante[i].numeroM);
        printf("Curso: %s\n", estudante[i].curso);
        printf("\n");
    }
  return 0;
}

