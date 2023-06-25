/*
    Atividade 29:   Codifique um programa que manipule um arquivo contendo registros
                    descritos pelos seguintes campos: codigo_vendedor, nome_vendedor,
                    valor_da_venda e mes. A manipulação do arquivo em questão é feita
                    através da execução das operações disponibilizadas pelo seguinte menu:
                            → Criar o arquivo de dados;
                            → Incluir um determinado registro no arquivo;
                            → Excluir um determinado vendedor no arquivo;
                            → Alterar o valor de uma venda no arquivo;
                            → Imprimir os registros na saída padrão;
                            → Excluir o arquivo de dados;
                            → Finalizar o programa.
                    Os registros devem estar ordenados no arquivo, de forma crescente, de
                    acordo com as Informações contidas nos campos código vendedor e mês.
                    Não deve existir mais de um registro no arquivo com mesmos valores nos
                    campos código vendedor e mês.
    Por Luís H.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOME 50

typedef struct 
{
    int codigo_vendedor;
    char nome_vendedor[MAX_NOME];
    float valor_da_venda;
    int mes;
} Registro;

void criarArquivoDados(const char *nomeArquivo) 
{
    FILE *arquivo = fopen(nomeArquivo, "wb");
    
    if(arquivo == NULL) 
    {
        printf("Erro ao criar o arquivo de dados.\n");
        exit(1);
    }
    fclose(arquivo);
    printf("Arquivo de dados criado com sucesso.\n");
}

void incluirRegistro(const char *nomeArquivo) 
{
    Registro registro;
    
    FILE *arquivo = fopen(nomeArquivo, "ab");
    
    if(arquivo == NULL) 
    {
        printf("Erro ao abrir o arquivo de dados.\n");
        exit(1);
    }

    printf("Digite o codigo do vendedor: ");
    scanf("%d", &registro.codigo_vendedor);

    printf("Digite o nome do vendedor: ");
    scanf("%s", registro.nome_vendedor);

    printf("Digite o valor da venda: ");
    scanf("%f", &registro.valor_da_venda);

    printf("Digite o mes: ");
    scanf("%d", &registro.mes);

    //Escrever o registro no arquivo
    fwrite(&registro, sizeof(Registro), 1, arquivo);

    fclose(arquivo);
    printf("Registro incluído com sucesso.\n");
}

void excluirRegistro(const char *nomeArquivo)
{
    Registro registro;
    int codigo, mes;
    
    FILE *arquivo = fopen(nomeArquivo, "rb");
    
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo de dados.\n");
        exit(1);
    }

    FILE *novoArquivo = fopen("temp.dat", "wb");
    
    if (novoArquivo == NULL) 
    {
        printf("Erro ao criar arquivo temporário.\n");
        fclose(arquivo);
        exit(1);
    }

    printf("Digite o código do vendedor a ser excluído: ");
    scanf("%d", &codigo);

    printf("Digite o mês do registro a ser excluído: ");
    scanf("%d", &mes);

    //Ler cada registro do arquivo original
    while(fread(&registro, sizeof(Registro), 1, arquivo) == EOF) 
    {
        // Verificar se é o registro a ser excluído
        if(registro.codigo_vendedor == codigo && registro.mes == mes) 
        {
            //Ignorar o registro, não escrever no arquivo temporário
            continue;
        }

        //Escrever o registro no arquivo temporário
        fwrite(&registro, sizeof(Registro), 1, novoArquivo);
    }

    fclose(arquivo);
    fclose(novoArquivo);

    //Substituir o arquivo original pelo arquivo temporário
    remove(nomeArquivo);
    rename("temp.dat", nomeArquivo);

    printf("Registro excluido com sucesso.\n");
}

void alterarValorVenda(const char *nomeArquivo) 
{
    FILE *arquivo = fopen(nomeArquivo, "rb+");
    int codigo, mes;
    float novoValor;
    Registro registro;
    if (arquivo == NULL) 
    {
        printf("Erro ao abrir o arquivo de dados.\n");
        exit(1);
    }

    printf("Digite o código do vendedor: ");
    scanf("%d", &codigo);

    printf("Digite o mês: ");
    scanf("%d", &mes);

    //Buscar o registro a ser alterado
    while (fread(&registro, sizeof(Registro), 1, arquivo) == EOF) 
    {
        if (registro.codigo_vendedor == codigo && registro.mes == mes) 
        {
            printf("Digite o novo valor da venda: ");
            scanf("%f", &novoValor);

            //Atualizar o valor da venda
            registro.valor_da_venda = novoValor;

            //Voltar para a posição correta no arquivo
            fseek(arquivo, -sizeof(Registro), SEEK_CUR);

            //Escrever o registro modificado no arquivo
            fwrite(&registro, sizeof(Registro), 1, arquivo);

            printf("Valor da venda alterado com sucesso.\n");
            break;
        }
    }

    fclose(arquivo);
}

void imprimirRegistros(const char *nomeArquivo) 
{
    FILE *arquivo = fopen(nomeArquivo, "rb");
    Registro registro;
    
    if (arquivo == NULL) 
    {
        printf("Erro ao abrir o arquivo de dados.\n");
        exit(1);
    }

    printf("\nRegistros:\n");
    printf("--------------------------------------------------\n");
    printf("Codigo\tNome\t\t\tValor Venda\tMes\n");
    printf("--------------------------------------------------\n");

    //Ler e imprimir cada registro
    while(fread(&registro, sizeof(Registro), 1, arquivo) == EOF) 
    {
        printf("%-7d%-25s%-12.2f%d\n", registro.codigo_vendedor, registro.nome_vendedor, registro.valor_da_venda, registro.mes);
    }

    printf("--------------------------------------------------\n");

    fclose(arquivo);
}

void excluirArquivoDados(const char *nomeArquivo) 
{
    if(remove(nomeArquivo) == 0) 
    {
        printf("Arquivo de dados excluido com sucesso.\n");
    } 
    else 
    {
        printf("Erro ao excluir o arquivo de dados.\n");
    }
}

int main() 
{
    char nomeArquivo[100];
    int opcao;

    printf("Digite o nome do arquivo de dados: ");
    scanf("%s", nomeArquivo);
    
    do 
    {
        printf("\nMenu:\n");
        printf("1 - Criar arquivo de dados\n");
        printf("2 - Incluir registro\n");
        printf("3 - Excluir registro\n");
        printf("4 - Alterar valor da venda\n");
        printf("5 - Imprimir registros\n");
        printf("6 - Excluir arquivo de dados\n");
        printf("7 - Finalizar programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) 
        {
            case 1:
                criarArquivoDados(nomeArquivo);
                break;
                
            case 2:
                incluirRegistro(nomeArquivo);
                break;
                
            case 3:
                excluirRegistro(nomeArquivo);
                break;
                
            case 4:
                alterarValorVenda(nomeArquivo);
                break;
                
            case 5:
                imprimirRegistros(nomeArquivo);
                break;
                
            case 6:
                excluirArquivoDados(nomeArquivo);
                break;
                
            case 7:
                printf("Programa finalizado.\n");
                break;
                
            default:
                printf("Opcao inválida. Digite novamente.\n");
                break;
        }
    } while(opcao != 7);

    return 0;
}
