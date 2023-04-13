/*
    Atividade 14: Faça um programa que simula o lançamento de dois dados, d1 e d2, n vezes, e tem como
                  saída o número de cada dado e a relação entre eles (>, <, =) de cada lançamento.
    Por Luís H.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    /*
      chamar ao principio de main, UMA só vez, sem importar quantas vezes você chame a rand em main ou outras funções.
    */
    int min = 1; // O menor numero
    int max;
    char op; //opção

    
    do
    {
        printf("Digite quantas faces o dado deve possuir: ");
        scanf("%d%*c", &max); // O maior numero
    
    
        printf("A face sorteada foi: %d\n\n", (rand () % (max-min+1) + min) ); // gera numeros entre min e max
        
        fflush(stdin); //limpando o buffer
        printf("Deseja continuar? (S/N): ");
        scanf("%c", &op);
        
        if((op == 'n') || (op == 'N'))
        {
            return 1;
        }
    } 
    while(1);
    
    return 0;
}
