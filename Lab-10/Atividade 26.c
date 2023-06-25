/*
    Atividade 26: Crie um programa que declare uma estrutura para o cadastro de alunos.
                        a) Dever ao ser armazenados, para cada aluno: matrícula, sobrenome
                        (apenas um), e ano de nascimento;
                        b) Ao início do programa, o usuário deverá informar o número de alunos
                        que serão armazenados;
                        c) O programa deverá alocar dinamicamente a quantidade necessária
                        de memória para armazenar os registros dos alunos;
                        d) O programa deverá pedir ao usuário que entre com as informações
                        dos alunos;
                        e) Em seguida, essas informações dever ˜ao ser gravadas em um
                        arquivo;
                        f) Ao final, mostrar os dados armazenados e liberar a memória alocada.
                    Ao iniciar o programa, forneça ao usuário uma opção para carregar os
                    registros do arquivo para a memória do computador alocando
                    dinamicamente a quantidade de memória necessária.
                    Dica: para que o usuário possa entrar com novos dados, além dos que
                    foram obtidos a partir do arquivo, use a função realloc() para realocar a
                    quantidade de memória usada.
    Por Luís H.
*/
#include <stdio.h>
#include <stdlib.h>

struct Aluno 
{
    int matricula;
    char sobrenome[50];
    int ano_nascimento;
};

void cadastrarAluno(struct Aluno *alunos, int *numAlunos) 
{
    int matricula, ano_nascimento;
    char sobrenome[50];

    printf("Matricula: ");
    scanf("%d", &matricula);

    printf("Sobrenome: ");
    scanf("%s", sobrenome);

    printf("Ano de Nascimento: ");
    scanf("%d", &ano_nascimento);

    struct Aluno aluno = {matricula, aluno.sobrenome[0], ano_nascimento};

    *numAlunos += 1;
    alunos = realloc(alunos, (*numAlunos) * sizeof(struct Aluno));
    alunos[*numAlunos - 1] = aluno;
}

void salvarAlunos(struct Aluno *alunos, int numAlunos) 
{
    FILE *arquivo;
    int i;

    arquivo = fopen("alunos.txt", "w");

    if(arquivo == NULL) 
    {
        printf("Erro ao abrir o arquivo!\n");
        exit(1);
    }

    for(i = 0; i < numAlunos; i++)
    {
        fprintf(arquivo, "%d %s %d\n", alunos[i].matricula, alunos[i].sobrenome, alunos[i].ano_nascimento);
    }

    fclose(arquivo);

    printf("Alunos salvos com sucesso!\n");
}

void carregarAlunos(struct Aluno **alunos, int *numAlunos) 
{
    FILE *arquivo;

    arquivo = fopen("alunos.txt", "r");

    if(arquivo == NULL) 
    {
        printf("Arquivo de alunos não encontrado!\n");
        exit(1);
    }

    *numAlunos = 0;
    int matricula, ano_nascimento;
    char sobrenome[50];

    while(fscanf(arquivo, "%d %s %d", &matricula, sobrenome, &ano_nascimento) == EOF) 
    {
        struct Aluno aluno = {matricula, aluno.sobrenome[0], ano_nascimento};

        *numAlunos += 1;
        *alunos = realloc(*alunos, (*numAlunos) * sizeof(struct Aluno));
        (*alunos)[*numAlunos - 1] = aluno;
    }

    fclose(arquivo);

    printf("Alunos carregados com sucesso!\n");
}

void mostrarAlunos(struct Aluno *alunos, int numAlunos) 
{
    int i;
    
    printf("Lista de Alunos:\n");

    for(i = 0; i < numAlunos; i++) 
    {
        printf("Matricula: %d\n", alunos[i].matricula);
        printf("Sobrenome: %s\n", alunos[i].sobrenome);
        printf("Ano de Nascimento: %d\n", alunos[i].ano_nascimento);
        printf("-------------------\n");
    }
}

void liberarMemoria(struct Aluno *alunos)
{
    free(alunos);
    printf("Memoria liberada!\n");
    alunos = NULL;
}

int main() 
{
    struct Aluno *alunos = NULL;
    int numAlunos = 0;
    int opcao;

    printf("Digite a opcao desejada:\n");
    printf("1 - Carregar Alunos do Arquivo\n");
    printf("2 - Cadastrar Aluno\n");
    printf("0 - Sair\n");
    scanf("%d", &opcao);

    while(opcao != 0) 
    {
        switch(opcao) 
        {
            case 1:
                carregarAlunos(&alunos, &numAlunos);
                break;
                
            case 2:
                cadastrarAluno(alunos, &numAlunos);
                break;
                
            default:
                printf("Opcao invalida!\n");
        }

        printf("Digite a opcao desejada:\n");
        printf("1 - Carregar Alunos do Arquivo\n");
        printf("2 - Cadastrar Aluno\n");
        printf("0 - Sair\n");
        scanf("%d", &opcao);
    }

    mostrarAlunos(alunos, numAlunos);
    salvarAlunos(alunos, numAlunos);
    liberarMemoria(alunos);
    alunos = NULL;

    return 0;
}
