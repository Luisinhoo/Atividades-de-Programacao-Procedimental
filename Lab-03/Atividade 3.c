/*
    Atividade 3:  Faça um algoritmo utilizando o comando while que mostra uma contagem regressiva na tela,
                  iniciando em 10 e terminando em 0. Mostrar uma mensagem “FIM!” após a contagem.
    Por Luís H.

*/
#include <stdio.h>

int main()
{
    int i = 10;
    
    printf("Contagem:\n");
    
    while(i >= 0)
    {
        printf("%d\n", i--);
    }
    printf("\n");
    printf("FIM!\n");
    
    return 0;
}
