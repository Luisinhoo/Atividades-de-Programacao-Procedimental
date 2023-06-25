/*
    Atividade 24:   Implemente um controle simples de mercadorias em uma despensa
                    doméstica. Para cada produto armazene um código numérico, descrição
                    e quantidade atual. O programa deve ter opções para entrada e retirada
                    de produtos, bem como um relatório geral e um de produtos não
                    disponíveis. Armazene os dados em arquivo binário.
    Por Luís H.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Produto 
{
    int codigo;
    char descricao[100];
    int quantidade;
};

void cadastrarProduto(FILE *arquivo) 
{
    struct Produto produto;

    printf("Digite o codigo do produto: ");
    scanf("%d", &produto.codigo);

    printf("Digite a descricao do produto: ");
    scanf(" %[^\n]", produto.descricao);

    printf("Digite a quantidade do produto: ");
    scanf("%d", &produto.quantidade);

    //Escrever no arquivo binário
    fwrite(&produto, sizeof(struct Produto), 1, arquivo);

    printf("Produto cadastrado com sucesso!\n");
}

void retirarProduto(FILE *arquivo)
{
    int codigo;
    struct Produto produto;

    printf("Digite o codigo do produto a ser retirado: ");
    scanf("%d", &codigo);

    //Procurar o produto no arquivo
    while(fread(&produto, sizeof(struct Produto), 1, arquivo) == EOF) 
    {
        if(produto.codigo == codigo) 
        {
            if(produto.quantidade > 0) 
            {
                produto.quantidade--;
                fseek(arquivo, -sizeof(struct Produto), SEEK_CUR);
                fwrite(&produto, sizeof(struct Produto), 1, arquivo);
                printf("Produto retirado com sucesso!\n");
            }
            else 
            {
                printf("Produto indisponivel!\n");
            }
            return;
        }
    }

    printf("Produto não encontrado!\n");
}

void relatorioGeral(FILE *arquivo) 
{
    struct Produto produto;

    printf("Relatório Geral:\n");

    //Ler todos os produtos do arquivo e exibir na tela
    while(fread(&produto, sizeof(struct Produto), 1, arquivo) == EOF) 
    {
        printf("Codigo: %d\n", produto.codigo);
        printf("Descricao: %s\n", produto.descricao);
        printf("Quantidade: %d\n", produto.quantidade);
        printf("\n");
    }
}

void relatorioIndisponiveis(FILE *arquivo) 
{
    struct Produto produto;

    printf("Relatorio de Produtos Indisponiveis:\n");

    //Ler todos os produtos do arquivo e exibir na tela apenas os indisponíveis
    while(fread(&produto, sizeof(struct Produto), 1, arquivo) == EOF) 
    {
        if(produto.quantidade == 0) 
        {
            printf("Código: %d\n", produto.codigo);
            printf("Descrição: %s\n", produto.descricao);
            printf("Quantidade: %d\n", produto.quantidade);
            printf("\n");
        }
    }
}

int main() 
{
    FILE *arquivo;
    int opcao;

    arquivo = fopen("despensa.dat", "rb+");

    if(arquivo == NULL) 
    {
        arquivo = fopen("despensa.dat", "wb");
        
        if(arquivo == NULL) 
        {
            printf("Erro ao criar o arquivo!\n");
            exit(1);
        }
    }

    while(1) 
    {
        printf("----------- Controle de Mercadorias -----------\n");
        printf("1 - Cadastrar Produto\n");
        printf("2 - Retirar Produto\n");
        printf("3 - Relatorio Geral\n");
        printf("4 - Relatorio de Produtos Indisponiveis\n");
        printf("0 - Sair\n");
        printf("-----------------------------------------------\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);

        switch(opcao) 
        {
            case 1:
                cadastrarProduto(arquivo);
                break;
                
            case 2:
                retirarProduto(arquivo);
                break;
                
            case 3:
                relatorioGeral(arquivo);
                break;
                
            case 4:
                relatorioIndisponiveis(arquivo);
                break;
                
            case 0:
                fclose(arquivo);
                return 0;
                
            default:
                printf("Opção invalida!\n");
                break;
        }
    }

    return 0;
}
