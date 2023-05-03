/*
        MATRIZES:

    Atividade 8: Faça um programa que leia duas matrizes 2 × 2 com valores reais. Ofereça ao usuário um
                 menu de opções:
                                a) somar as duas matrizes
                                b) subtrair a primeira matriz da segunda
                                c) adicionar uma constante às duas matrizes
                                d) imprimir as matrizes
    Por Luís H.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[2][2];
    int B[2][2];
    int op, soma = 0, subtrair = 0;
    int constante;
    int i, j;

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("Digite valor da linha %d, da coluna %d da matriz A: ", i+1, j+1);
            scanf("%d", &A[i][j]);
        }
    }
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("Digite valor da linha %d, da coluna %d da matriz B: ", i+1, j+1);
            scanf("%d", &B[i][j]);
        }
    }
    printf("OPCOES: \n");
    printf("1 - Somar as duas matrizes\n");
    printf("2 - Subtrair a primeira matriz da segunda\n");
    printf("3 - Adicionar uma constante as duas matrizes\n");
    printf("4 - Imprimir as matrizes\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &op);

    switch(op)
    {
        case 1:
               printf("Soma eh:\n");
               for(i = 0; i < 2; i++)
               {
                   for(j = 0; j < 2; j++)
                   {
                       soma = A[i][j] + B[i][j];
                       printf("%d", soma);
                   }
                   printf("\n");
               }
               break;

       case 2:
               for(i = 0; i < 2; i++)
               {
                   for(j = 0; j < 2; j++)
                   {
                       subtrair = A[i][j] - B[i][j];
                       printf("%d ", subtrair);
                   }
                   printf("\n");
               }
               break;

       case 3:
               printf("Digite a constante: ");
               scanf("%d", &constante);

               for(i = 0; i < 2; i++)
               {
                   for(j = 0; j < 2; j++)
                   {
                       printf("%d ", A[i][j] + constante);
                   }
                   printf("\n");
               }
               for(i = 0; i < 2; i++)
               {
                   for(j = 0; j < 2; j++)
                   {
                       printf("%d ", B[i][j] + constante);
                   }
                   printf("\n");
               }
               break;

       case 4:
              printf("Matriz A\n");
              for(i = 0; i < 2; i++)
              {
                  for(j = 0; j < 2; j++)
                  {
                      printf("%d ", A[i][j]);
                  }
                  printf("\n");
              }
              
              printf("MAtriz B\n");
              for(i = 0; i < 2; i++)
              {
                  for(j = 0; j < 2; j++)
                  {
                      printf("%1d ", B[i][j]);
                  }
                  printf("\n");
              }
              break;

      default:
              printf("Opção inválida!\n");
              break;
    }
    return 0;
}
