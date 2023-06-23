/*
  Atividade 12: Considere um cadastro de produtos de um estoque, com as seguintes informações para cada produto:
                        → Código de identificação do produto: representado por um valor inteiro
                        → Nome do produto: com até 50 caracteres
                        → Quantidade disponível no estoque: representado por um número inteiro
                        → Preço de venda: representado por um valor real
                                a) Defina uma estrutura, denominada produto, que tenha os campos apropriados 
                                   para guardar as informações de um produto;
                                b) Crie um conjunto de N produtos (N é um valor fornecido pelo usuário) e 
                                   peca ao usuário para entrar com as informações de cada produto;
                                c) Encontre o produto com o maior preço de venda;
                                d) Encontre o produto com a maior quantidade disponível no estoque.
  Por Luís H.
*/
#include <stdio.h>
#include <string.h>

#define MAX_PRODUTOS 100

struct Produto 
{
    char nome[50];
    int codigo;
    int quantidade;
    float preco;
};
typedef struct Produto Produto;

int main() 
{
    int N, i;
    Produto produtos[MAX_PRODUTOS];
    int indiceMaiorQuantidade = 0;
    int indiceMaiorPreco = 0;

    //Solicita o número de produtos ao usuário
    printf("Digite a quantidade de produtos: ");
    scanf("%d", &N);

    //Preenche as informações de cada produto
    for(i = 0; i < N; i++) 
    {
        printf("\nProduto %d:\n", i + 1);

        printf("Codigo: ");
        scanf("%d", &produtos[i].codigo);

        printf("Nome: ");
        scanf(" %[^\n]", produtos[i].nome);

        printf("Quantidade: ");
        scanf("%d", &produtos[i].quantidade);

        printf("Preco: ");
        scanf("%f", &produtos[i].preco);
    }

    //Encontra o produto com o maior preço de venda
    for(i = 1; i < N; i++) 
    {
        if(produtos[i].preco > produtos[indiceMaiorPreco].preco) 
        {
            indiceMaiorPreco = i;
        }
    }

    //Encontra o produto com a maior quantidade disponível no estoque
    for(i = 1; i < N; i++) 
    {
        if(produtos[i].quantidade > produtos[indiceMaiorQuantidade].quantidade) 
        {
            indiceMaiorQuantidade = i;
        }
    }

    //Exibe o produto com o maior preço de venda
    printf("\nProduto com maior preço de venda:\n");
    printf("Codigo: %d\n", produtos[indiceMaiorPreco].codigo);
    printf("Nome: %s\n", produtos[indiceMaiorPreco].nome);
    printf("Quantidade: %d\n", produtos[indiceMaiorPreco].quantidade);
    printf("Preco: %.2f\n", produtos[indiceMaiorPreco].preco);

    //Exibe o produto com a maior quantidade disponível no estoque
    printf("\nProduto com maior quantidade disponivel no estoque:\n");
    printf("Codigo: %d\n", produtos[indiceMaiorQuantidade].codigo);
    printf("Nome: %s\n", produtos[indiceMaiorQuantidade].nome);
    printf("Quantidade: %d\n", produtos[indiceMaiorQuantidade].quantidade);
    printf("Preco: %.2f\n", produtos[indiceMaiorQuantidade].preco);

    return 0;
}
