/*
  Atividade 17: Faça um programa que leia números do teclado e os armazene em um
                vetor alocado dinamicamente. O usuário irá digitar uma sequência de
                números, sem limite de quantidade. Os números serão digitados um a
                um e, sendo que caso ele deseje encerrar a entrada de dados, ele irá
                digitar o número ZERO. Os dados devem ser armazenados na memória
                deste modo:
                            a) Inicie com um vetor de tamanho 10 alocado dinamicamente;
                            b) Após, caso o vetor alocado esteja cheio, aloque um novo vetor do
                               tamanho do vetor anterior adicionado espaço para mais 10 valores
                               (tamanho N+10, onde N inicia com 10);
                            c) Copie os valores já digitados da área inicial para esta área maior e
                               libere a memória da área inicial;
                            d) Repita este procedimento de expandir dinamicamente com mais 10
                               valores o vetor alocado cada vez que o mesmo estiver cheio. Assim o
                               vetor irá ser “expandido” de 10 em 10 valores.
                Ao final, exiba o vetor lido. Não use a função REALLOC.
  Por Luís H.
*/
#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *vetor = (int *)malloc(10 * sizeof(int)); //Inicialmente, aloca um vetor de tamanho 10
    int tamanho_atual = 10; //Tamanho atual do vetor
    int indice = 0; //Índice para controlar a posição de inserção dos números
    int numero;
    int novo_tamanho;
    int *novo_vetor;
    int i;

    if (vetor == NULL) 
    {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    printf("Digite os numeros (digite 0 para encerrar):\n");

    while (1) 
    {
        scanf("%d", &numero);

        if(numero == 0) 
        {
            break; //Encerra o loop quando o número digitado for zero
        }

        vetor[indice] = numero;
        indice++;

        if(indice == tamanho_atual) 
        {
            //O vetor está cheio, precisa ser expandido
            novo_tamanho = tamanho_atual + 10;
            novo_vetor = (int *)malloc(novo_tamanho * sizeof(int));

            if(novo_vetor == NULL) 
            {
                printf("Erro ao alocar memoria.\n");
                free(vetor);
                return 1;
            }
            //Copia os valores do vetor antigo para o vetor expandido
            for(i = 0; i < tamanho_atual; i++) 
            {
                novo_vetor[i] = vetor[i];
            }

            free(vetor); //Libera a memória do vetor antigo
            vetor = novo_vetor;
            tamanho_atual = novo_tamanho;
        }
    }

    printf("Vetor lido:\n");
    for(i = 0; i < indice; i++) 
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor); //Libera a memória do vetor final
    vetor = NULL;

    return 0;
}
