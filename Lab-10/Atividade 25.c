/*
    Atividade 25: Faça um programa gerenciar uma agenda de contatos. Para cada
                  contato armazene o nome, o telefone e o aniversário (dia e mês). O
                  programa deve permitir
                        → inserir contato;
                        → remover contato;
                        → pesquisar um contato pelo nome;
                        → listar todos os contatos;
                        → listar os contatos cujo nome inicia com uma dada letra;
                        → imprimir os aniversariantes do mês.
                 Sempre que o programa for encerrado, os contatos devem ser
                 armazenados em um arquivo binário. Quando o programa iniciar, os
                 contatos devem ser inicializados com os dados contidos neste arquivo
                 binário.
    Por Luís H.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CONTATOS 100

struct Contato 
{
    char nome[50];
    char telefone[20];
    int dia_aniversario;
    int mes_aniversario;
};

void cadastrarContato(struct Contato *contatos, int *numContatos) 
{
    if(*numContatos == MAX_CONTATOS) 
    {
        printf("Agenda de contatos cheia!\n");
        return;
    }

    struct Contato novoContato;

    printf("Digite o nome do contato: ");
    scanf(" %[^\n]", novoContato.nome);

    printf("Digite o telefone do contato: ");
    scanf(" %[^\n]", novoContato.telefone);

    printf("Digite o dia do aniversario do contato: ");
    scanf("%d", &novoContato.dia_aniversario);

    printf("Digite o mes do aniversario do contato: ");
    scanf("%d", &novoContato.mes_aniversario);

    contatos[*numContatos] = novoContato;
    (*numContatos)++;

    printf("Contato cadastrado com sucesso!\n");
}

void removerContato(struct Contato *contatos, int *numContatos) 
{
    char nome[50];
    int i, posicao = -1;
    
    printf("Digite o nome do contato a ser removido: ");
    scanf(" %[^\n]", nome);

    for(i = 0; i < *numContatos; i++)
    {
        if(strcmp(contatos[i].nome, nome) == 0) 
        {
            posicao = i;
            break;
        }
    }

    if(posicao == -1) 
    {
        printf("Contato não encontrado!\n");
        exit(1);
    }

    for(i = posicao; i < *numContatos - 1; i++)
    {
        contatos[i] = contatos[i + 1];
    }

    (*numContatos)--;

    printf("Contato removido com sucesso!\n");
}

void pesquisarContato(struct Contato *contatos, int numContatos) 
{
    char nome[50];
    int i, encontrado = 0;
    
    printf("Digite o nome do contato a ser pesquisado: ");
    scanf(" %[^\n]", nome);

    for(i = 0; i < numContatos; i++) {
        if(strcmp(contatos[i].nome, nome) == 0) 
        {
            printf("Nome: %s\n", contatos[i].nome);
            printf("Telefone: %s\n", contatos[i].telefone);
            printf("Aniversário: %d/%d\n", contatos[i].dia_aniversario, contatos[i].mes_aniversario);
            encontrado = 1;
            break;
        }
    }

    if(!encontrado) 
    {
        printf("Contato nao encontrado!\n");
    }
}

void listarContatos(struct Contato *contatos, int numContatos)
{
    int i;
    
    printf("Lista de Contatos:\n");
    
    for(i = 0; i < numContatos; i++) 
    {
        printf("Nome: %s\n", contatos[i].nome);
        printf("Telefone: %s\n", contatos[i].telefone);
        printf("Aniversario: %d/%d\n", contatos[i].dia_aniversario, contatos[i].mes_aniversario);
        printf("-------------------\n");
    }
}

void listarContatosPorLetra(struct Contato *contatos, int numContatos, char letra) 
{
    int i;
    
    printf("Lista de Contatos com Inicial '%c':\n", letra);

    for(i = 0; i < numContatos; i++) 
    {
        if(contatos[i].nome[0] == letra) 
        {
            printf("Nome: %s\n", contatos[i].nome);
            printf("Telefone: %s\n", contatos[i].telefone);
            printf("Aniversário: %d/%d\n", contatos[i].dia_aniversario, contatos[i].mes_aniversario);
            printf("-------------------\n");
        }
    }
}

void imprimirAniversariantes(struct Contato *contatos, int numContatos, int mes) 
{
    int i;
    
    printf("Aniversariantes do Mes %d:\n", mes);

    for(i = 0; i < numContatos; i++) 
    {
        if(contatos[i].mes_aniversario == mes) 
        {
            printf("Nome: %s\n", contatos[i].nome);
            printf("Telefone: %s\n", contatos[i].telefone);
            printf("Aniversário: %d/%d\n", contatos[i].dia_aniversario, contatos[i].mes_aniversario);
            printf("-------------------\n");
        }
    }
}

void salvarContatos(struct Contato *contatos, int numContatos) 
{
    FILE *arquivo;

    arquivo = fopen("contatos.dat", "wb");

    if(arquivo == NULL) 
    {
        printf("Erro ao abrir o arquivo!\n");
        exit(1);
    }

    fwrite(contatos, sizeof(struct Contato), numContatos, arquivo);

    fclose(arquivo);

    printf("Contatos salvos com sucesso!\n");
}

void carregarContatos(struct Contato *contatos, int *numContatos) 
{
    FILE *arquivo;

    arquivo = fopen("contatos.dat", "rb");

    if(arquivo == NULL) 
    {
        printf("Arquivo de contatos não encontrado!\n");
        exit(1);
    }

    fread(contatos, sizeof(struct Contato), MAX_CONTATOS, arquivo);

    *numContatos = feof(arquivo) ? MAX_CONTATOS : ftell(arquivo) / sizeof(struct Contato);

    fclose(arquivo);

    printf("Contatos carregados com sucesso!\n");
}

int main() 
{
    struct Contato contatos[MAX_CONTATOS];
    int numContatos = 0;
    carregarContatos(contatos, &numContatos);
    int opcao;

    while(1) 
    {
        printf("==============================================\n");
        printf("Agenda de Contatos\n");
        printf("==============================================\n");
        printf("1 - Inserir Contato\n");
        printf("2 - Remover Contato\n");
        printf("3 - Pesquisar Contato por Nome\n");
        printf("4 - Listar Todos os Contatos\n");
        printf("5 - Listar Contatos por Inicial do Nome\n");
        printf("6 - Imprimir Aniversariantes do Mes\n");
        printf("0 - Sair\n");
        printf("----------------------------------------------\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);

        switch(opcao)
        {
            case 1:
                cadastrarContato(contatos, &numContatos);
                break;
                
            case 2:
                removerContato(contatos, &numContatos);
                break;
                
            case 3:
                pesquisarContato(contatos, numContatos);
                break;
                
            case 4:
                listarContatos(contatos, numContatos);
                break;
                
            case 5:
                char letra;
                printf("Digite a letra inicial do nome: ");
                scanf(" %c", &letra);
                listarContatosPorLetra(contatos, numContatos, letra);
                break;
                
            case 6:
            
                int mes;
                printf("Digite o mes dos aniversariantes: ");
                scanf("%d", &mes);
                imprimirAniversariantes(contatos, numContatos, mes);
                break;
                
            case 0:
                salvarContatos(contatos, numContatos);
                return 0;
                
            default:
                printf("Opcao invalida!\n");
        }
    }

    return 0;
}

