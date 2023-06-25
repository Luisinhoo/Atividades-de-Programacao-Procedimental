/*
    Atividade 27: Faça um programa para gerenciar as notas dos alunos de uma turma
                  salva em um arquivo. O programa deverá ter um menu contendo as
                  seguintes opções:
                            → Definir informações da turma;
                            → Inserir aluno e notas;
                            → Exibir alunos e médias;
                            → Exibir alunos aprovados;
                            → Exibir alunos reprovados;
                            → Salvar dados em Disco;
                            → Sair do programa (fim).
                  Faça a rotina que gerencia o menu dentro do main, e para cada uma das
                  opções deste menu, crie uma função específica.
    Por Luís H.
*/
#include <stdio.h>
#include <stdlib.h>

struct Aluno 
{
    char nome[50];
    float nota1;
    float nota2;
    float media;
};

struct Turma 
{
    int quantidadeAlunos;
    struct Aluno *alunos;
};

void definirInformacoesTurma(struct Turma *turma) 
{
    printf("Digite a quantidade de alunos da turma: ");
    scanf("%d", &(turma->quantidadeAlunos));

    turma->alunos = (struct Aluno *)malloc(turma->quantidadeAlunos * sizeof(struct Aluno));

    printf("Informacoes da turma definidas!\n");
}

void inserirAlunoNotas(struct Turma *turma) 
{
    if(turma->alunos == NULL) 
    {
        printf("Informe as informacoes da turma primeiro!\n");
        exit(1);
    }

    int indiceAluno = turma->quantidadeAlunos;

    if(indiceAluno >= turma->quantidadeAlunos) 
    {
        printf("A turma já está completa!\n");
        exit(1);
    }

    printf("Digite o nome do aluno: ");
    scanf("%s", turma->alunos[indiceAluno].nome);

    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &(turma->alunos[indiceAluno].nota1));

    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &(turma->alunos[indiceAluno].nota2));

    turma->alunos[indiceAluno].media = (turma->alunos[indiceAluno].nota1 + turma->alunos[indiceAluno].nota2) / 2;

    printf("Aluno cadastrado com sucesso!\n");

    turma->quantidadeAlunos++;
}

void exibirAlunosMedias(struct Turma *turma) 
{
    int i;
    
    if(turma->alunos == NULL) 
    {
        printf("Nao ha alunos cadastrados na turma!\n");
        exit(1);
    }

    printf("Alunos e Médias:\n");

    for(i = 0; i < turma->quantidadeAlunos; i++) 
    {
        printf("Aluno: %s\n", turma->alunos[i].nome);
        printf("Media: %.2f\n", turma->alunos[i].media);
        printf("-------------------\n");
    }
}

void exibirAlunosAprovados(struct Turma *turma) 
{
    int i;
    
    if(turma->alunos == NULL) 
    {
        printf("Nao ha alunos cadastrados na turma!\n");
        exit(1);
    }

    printf("Alunos Aprovados:\n");

    for(i = 0; i < turma->quantidadeAlunos; i++) 
    {
        if(turma->alunos[i].media >= 7.0) 
        {
            printf("Aluno: %s\n", turma->alunos[i].nome);
            printf("Media: %.2f\n", turma->alunos[i].media);
            printf("-------------------\n");
        }
    }
}

void exibirAlunosReprovados(struct Turma *turma) 
{
    int i;
    
    if(turma->alunos == NULL) 
    {
        printf("Nao ha alunos cadastrados na turma!\n");
        exit(1);
    }

    printf("Alunos Reprovados:\n");

    for(i = 0; i < turma->quantidadeAlunos; i++) 
    {
        if(turma->alunos[i].media < 7.0) 
        {
            printf("Aluno: %s\n", turma->alunos[i].nome);
            printf("Media: %.2f\n", turma->alunos[i].media);
            printf("-------------------\n");
        }
    }
}

void salvarDadosDisco(struct Turma *turma) 
{
    int i;
    
    if(turma->alunos == NULL) 
    {
        printf("Nao ha alunos cadastrados na turma!\n");
        exit(1);
    }

    FILE *arquivo = fopen("alunos.txt", "w");

    if(arquivo == NULL) 
    {
        printf("Erro ao abrir o arquivo!\n");
        exit(1);
    }

    for(i = 0; i < turma->quantidadeAlunos; i++) 
    {
        fprintf(arquivo, "Aluno: %s\n", turma->alunos[i].nome);
        fprintf(arquivo, "Media: %.2f\n", turma->alunos[i].media);
        fprintf(arquivo, "-------------------\n");
    }

    fclose(arquivo);

    printf("Dados salvos no arquivo com sucesso!\n");
}

void liberarMemoria(struct Turma *turma) 
{
    if(turma->alunos != NULL) 
    {
        free(turma->alunos);
    }
}

int main() 
{
    struct Turma turma;
    turma.alunos = NULL;
    turma.quantidadeAlunos = 0;
    int opcao;

    do 
    {
        printf("========= Menu =========\n");
        printf("1 - Definir informaçoes da turma\n");
        printf("2 - Inserir aluno e notas\n");
        printf("3 - Exibir alunos e medias\n");
        printf("4 - Exibir alunos aprovados\n");
        printf("5 - Exibir alunos reprovados\n");
        printf("6 - Salvar dados em disco\n");
        printf("0 - Sair do programa\n");
        printf("========================\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);

        switch(opcao) 
        {
            case 1:
                definirInformacoesTurma(&turma);
                break;
                
            case 2:
                inserirAlunoNotas(&turma);
                break;
                
            case 3:
                exibirAlunosMedias(&turma);
                break;
                
            case 4:
                exibirAlunosAprovados(&turma);
                break;
                
            case 5:
                exibirAlunosReprovados(&turma);
                break;
                
            case 6:
                salvarDadosDisco(&turma);
                break;
                
            case 0:
                printf("Encerrando o programa...\n");
                break;
                
            default:
                printf("Opcao invalida! Digite novamente.\n");
        }
    } while(opcao != 0);

    liberarMemoria(&turma);

    return 0;
}
