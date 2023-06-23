/*
  Atividade 11: Crie um programa que declare uma estrutura (registro) para o cadastro
                de alunos.
                    a) Deverão ser armazenados, para cada aluno: matrícula, sobrenome
                       (apenas um) e ano de nascimento;
                    b) Ao início do programa, o usuário deverá informar o número de alunos
                       que serão armazenados;
                    c) O programa deverá alocar dinamicamente a quantidade necessária
                       de memória para armazenar os registros dos alunos;
                    d) O programa deverá pedir ao usuário que entre com as informações
                       dos alunos.
                    e) Ao final, mostrar os dados armazenados e liberar a memória alocada
  Por Luís H.
*/
#include <stdio.h>
#include <stdlib.h>

struct alunos 
{
    int matricula;
    char sobrenome[50];
    int ano_nascimento;
} ;
typedef struct alunos Aluno;

int main() 
{
    int num_alunos, i;
    
    printf("Digite o numero de alunos: ");
    scanf("%d", &num_alunos);
    
    //Alocar memória para armazenar os registros dos alunos
    Aluno *alunos = (Aluno*)malloc(num_alunos * sizeof(Aluno));
    
    //Entrada de dados
    for(i = 0; i < num_alunos; i++) 
    {
        printf("Aluno %d:\n", i + 1);
        
        printf("Matricula: ");
        scanf("%d", &(alunos[i].matricula));
        
        printf("Sobrenome: ");
        scanf("%s", alunos[i].sobrenome);
        
        printf("Ano de Nascimento: ");
        scanf("%d", &(alunos[i].ano_nascimento));
        
        printf("\n");
    }
    
    //Mostrar os dados armazenados
    printf("Dados dos alunos:\n");
    for(i = 0; i < num_alunos; i++) 
    {
        printf("Aluno %d:\n", i + 1);
        printf("Matricula: %d\n", alunos[i].matricula);
        printf("Sobrenome: %s\n", alunos[i].sobrenome);
        printf("Ano de Nascimento: %d\n", alunos[i].ano_nascimento);
        printf("\n");
    }
    
    //Liberar a memória alocada
    free(alunos);
    alunos = NULL;
    
    return 0;
}
