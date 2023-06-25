/*
    Atividade 23: Escreva um programa que leia a profissão e o tempo de serviço (em
                  anos) de cada um dos 5 funcionários de uma empresa e armazene-os no
                  arquivo “emp.txt”. Cada linha do arquivo corresponde aos dados de um
                  funcionário. Utilize o comando fprintf(). Em seguida, leia o mesmo
                  arquivo utilizando fscanf(). Apresente os dados na tela.
    Por Luís H.
*/
#include <stdio.h>
#include <stdlib.h>

struct Funcionario 
{
    char profissao[100];
    int tempoServico;
};

int main() 
{
    FILE *arquivo;
    struct Funcionario funcionarios[5];
    int i;

    arquivo = fopen("emp.txt", "w");

    if(arquivo == NULL) 
    {
        printf("Erro ao abrir o arquivo para escrita!\n");
        exit(1);
    }

    //Ler os dados dos funcionários e escrever no arquivo
    for(i = 0; i < 5; i++) 
    {
        printf("Digite a profissao do funcionario %d: ", i + 1);
        scanf("%s", funcionarios[i].profissao);
        printf("Digite o tempo de servico (em anos) do funcionario %d: ", i + 1);
        scanf("%d", &funcionarios[i].tempoServico);

        //Escrever no arquivo
        fprintf(arquivo, "%s %d\n", funcionarios[i].profissao, funcionarios[i].tempoServico);
    }

    fclose(arquivo);

    arquivo = fopen("emp.txt", "r");

    if(arquivo == NULL) 
    {
        printf("Erro ao abrir o arquivo para leitura!\n");
        exit(1);
    }

    printf("\nDados dos funcionarios:\n");

    //Ler os dados dos funcionários do arquivo e exibir na tela
    for(i = 0; i < 5; i++) 
    {
        fscanf(arquivo, "%s %d", funcionarios[i].profissao, &funcionarios[i].tempoServico);
        printf("Funcionario %d:\n", i + 1);
        printf("Profissao: %s\n", funcionarios[i].profissao);
        printf("Tempo de servico (em anos): %d\n", funcionarios[i].tempoServico);
        printf("\n");
    }

    fclose(arquivo);

    return 0;
}
