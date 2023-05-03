/*
        MATRIZES:

    Atividade 7: Faça um programa para gerar automaticamente números entre 0 e 99 de uma cartela de
                 bingo. Sabendo que cada cartela deverá conter 5 linhas de 5 números, gere estes dados de
                 modo a não ter números repetidos dentro das cartelas. O programa deve exibir na tela a
                 cartela gerada.
    Por Luís H.
*/
#include <stdio.h>
#include <stdlib.h>//para a função srand e rand
#include <time.h>//para a função time

int main()
{
    int car[5][5]; //cartela
    int i, j, k;
    int gerar; //variável para armazenar a os números aleatórios gerados
    
    srand(time(NULL)); //Para gerar números aleatórios a cada "run"
    
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            do
            {
                gerar = rand() % 100;//gerar automaticamente números entre 0 e 99 
                
                // verifica se o número já foi sorteado
                for(k = 0; k < j; k++)
                {
                    if(gerar == car[i][k])
                    {
                        break;//se o número já foi sorteado, então sai do loop interno
                    }
                }
            }
            while (k < j); // repete enquanto o número já tiver sido sorteado
            car[i][j] = gerar; // adiciona o número na cartela
        }
    }
        
    printf("========BINGO=======\n");
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            printf(" %2d ", car[i][j]);
            /*
              "%2d" garante que os números estejam alinhados em colunas,
              mesmo que alguns números tenham apenas uma casa decimal.
            */
        }
        printf("\n");
    }
    return 0;
}
