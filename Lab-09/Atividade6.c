/*
  Atividade 6: Faça um programa que simule a memória de um computador: o usuário
               irá especificar o tamanho da memória, ou seja, quantos bytes serão
               alocados do tipo inteiro. Para tanto, a memória solicitada deve ser um
               valor múltiplo do tamanho do tipo inteiro. Em seguida, o usuário terá 2
               opções: inserir um valor em uma determinada posição ou consultar o
               valor contido em uma determinada posição. A memória deve iniciar com
               todos os dados zerados.
  Por Luís H.
*/
#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *memoria = NULL;
    int memorySize; //Tamanho da memória em bytes
    int arraySize; //Tamanho do array (número de elementos inteiros)
    int op; //Opção escolhida pelo usuário
    int posicao; //Posição na memória
    int valor; //Valor a ser inserido

    printf("Digite o tamanho da memoria(em bytes): ");
    scanf("%d", &memorySize);

    //Verifica se o tamanho da memória é múltiplo do tamanho do tipo inteiro
    if(memorySize % sizeof(int) != 0) 
    {
        printf("Tamanho da memoria invalido!\n");
        return 1;
    }

    //Calcula o tamanho do array(número de elementos inteiros)
    arraySize = memorySize / sizeof(int);

    //Aloca a memória
    memoria = (int *)malloc(memorySize);

    //Verifica se a alocação foi bem-sucedida
    if (memoria == NULL) 
    {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    //Loop principal
    while (1) 
    {
        printf("\nOpçoes:\n");
        printf("1 - Inserir valor\n");
        printf("2 - Consultar valor\n");
        printf("0 - Sair\n");
        printf("Escolha uma opçao: ");
        scanf("%d", &op);

        switch(op) 
        {
            case 0:
                //Libera a memória antes de sair do programa
                free(memoria);
                printf("Programa encerrado!\n");
                return 0;
            case 1:
                printf("Posição: ");
                scanf("%d", &posicao);
                
                // Verifica se a posição é válida
                if (posicao < 0 || posicao >= arraySize) {
                    printf("Posicao invalida!\n");
                    break;
                }
                
                printf("Valor: ");
                scanf("%d", &valor);

                //Insere o valor na posição especificada
                memoria[posicao] = valor;
                printf("Valor inserido com sucesso!\n");
                break;
            case 2:
                printf("Posicao: ");
                scanf("%d", &posicao);
                
                // Verifica se a posição é válida
                if (posicao < 0 || posicao >= arraySize) {
                    printf("Posição invalida!\n");
                    break;
                }
                
                // Consulta o valor na posição especificada
                printf("Valor na posicao %d: %d\n", posicao, memoria[posicao]);
                break;
                
            default:
                printf("Opcao invalida!\n");
                break;
        }
    }
}
