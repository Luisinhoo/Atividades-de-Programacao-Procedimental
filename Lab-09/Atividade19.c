/*
  Atividade 19: Faça um programa para associar nomes as linhas de uma matriz de
                caracteres. O usuário irá informar o número máximo de nomes que
                poderão ser armazenados. Cada nome poderá ter até 30 caracteres com
                o '\0'. O usuário poderá usar 5 opções diferentes para manipular a
                matriz:
                    a) Gravar um nome em uma linha da matriz;
                    b) Apagar o nome contido em uma linha da matriz;
                    c) Informar um nome, procurar a linha onde ele se encontra e substituir
                       por outro nome;
                    d) Informar um nome, procurar a linha onde ele se encontra e apagar;
                    e) Pedir para recuperar o nome contido em uma linha da matriz.
  Por Luís H.
*/
#include <stdio.h>
#include <string.h>

#define MAX_NOMES 10
#define TAM_NOME 31
void imprimirMatriz(char matriz[MAX_NOMES][TAM_NOME]);

int main() 
{
    char matriz[MAX_NOMES][TAM_NOME];
    char nome[TAM_NOME];
    int opcao, linha;
    int i;

    //Inicializar a matriz com nomes vazios
    for(i = 0; i < MAX_NOMES; i++) 
    {
        strcpy(matriz[i], "");
    }

    do 
    {
        printf("\nMenu:\n");
        printf("1. Gravar um nome em uma linha da matriz\n");
        printf("2. Apagar o nome contido em uma linha da matriz\n");
        printf("3. Informar um nome, procurar a linha onde ele se encontra e substituir por outro nome\n");
        printf("4. Informar um nome, procurar a linha onde ele se encontra e apagar\n");
        printf("5. Recuperar o nome contido em uma linha da matriz\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) 
        {
            case 1: //Gravar um nome em uma linha da matriz
                printf("Digite o nome a ser gravado: ");
                scanf(" %30[^\n]", nome);

                printf("Digite o numero da linha (1 a %d): ", MAX_NOMES);
                scanf("%d", &linha);
                linha--; //Ajustar o número da linha para o índice da matriz

                if(linha >= 0 && linha < MAX_NOMES) 
                {
                    strcpy(matriz[linha], nome);
                    printf("Nome gravado com sucesso!\n");
                } 
                else 
                {
                    printf("Numero de linha invalido!\n");
                }
                break;

            case 2: //Apagar o nome contido em uma linha da matriz
                printf("Digite o numero da linha (1 a %d): ", MAX_NOMES);
                scanf("%d", &linha);
                linha--; //Ajustar o número da linha para o índice da matriz

                if(linha >= 0 && linha < MAX_NOMES) 
                {
                    strcpy(matriz[linha], "");
                    printf("Nome apagado com sucesso!\n");
                } 
                else 
                {
                    printf("Numero de linha invalido!\n");
                }
                break;

            case 3: //Informar um nome, procurar a linha onde ele se encontra e substituir por outro nome
                printf("Digite o nome a ser procurado: ");
                scanf(" %30[^\n]", nome);

                printf("Digite o novo nome: ");
                scanf(" %30[^\n]", matriz[linha]);

                for(i = 0; i < MAX_NOMES; i++) 
                {
                    if(strcmp(matriz[i], nome) == 0) 
                    {
                        strcpy(matriz[i], matriz[linha]);
                        strcpy(matriz[linha], "");
                        printf("Nome substituido com sucesso!\n");
                        break;
                    }
                }
                break;

            case 4: //Informar um nome, procurar a linha onde ele se encontra e apagar
                printf("Digite o nome a ser procurado: ");
                scanf(" %30[^\n]", nome);

                for(i = 0; i < MAX_NOMES; i++)
                {
                    if(strcmp(matriz[i], nome) == 0) 
                    {
                        strcpy(matriz[i], "");
                        printf("Nome apagado com sucesso!\n");
                        break;
                    }
                }
                break;

            case 5: //Recuperar o nome contido em uma linha da matriz
                printf("Digite o numero da linha (1 a %d): ", MAX_NOMES);
                scanf("%d", &linha);
                linha--; //Ajustar o número da linha para o índice da matriz

                if(linha >= 0 && linha < MAX_NOMES) 
                {
                    printf("Nome na linha %d: %s\n", linha+1, matriz[linha]);
                } 
                else 
                {
                    printf("Numero de linha invalido!\n");
                }
                break;

            case 0: // air
                printf("Programa encerrado.\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

        imprimirMatriz(matriz);
    } while (opcao != 0);

    return 0;
}

void imprimirMatriz(char matriz[MAX_NOMES][TAM_NOME]) 
{
    int i;
    
    printf("----- Matriz de Nomes -----\n");
    for(i = 0; i < MAX_NOMES; i++) 
    {
        printf("Linha %d: %s\n", i+1, matriz[i]);
    }
    printf("--------------------------\n");
}
