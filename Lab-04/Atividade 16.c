/*
    Atividade 16: Faça uma função chamada desenha_linha. Ele deve desenhar uma linha na tela usando uma
                  sequência de símbolos de igual (Ex.: ========). A função recebe por parâmetro quantos
                  sinais de igual serão mostrados.
    Por Luís H.
*/
#include <stdio.h>

void desenha_linha(int tamanho);
int main() 
{
    int tamanho;
    
    printf("Digite o tamanho da linha: ");
    scanf("%d", &tamanho);
    
    desenha_linha(tamanho);
    return 0;
}

void desenha_linha(int tamanho) 
{
    int i;
    
    for (i = 0; i < tamanho; i++) 
    {
        printf("=");
    }
    printf("\n");
}

