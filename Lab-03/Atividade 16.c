/*
  Atividade 16: Faça um programa que apresente um menu de opções para o cálculo das seguintes operações entre dois números:
                       -> Adição (opção 1)
                       -> Subtração (opção 2)
                       -> Multiplicação (opção 3)
                       -> Divisão (opção 4).
                       -> Saída (opção 5)
                O programa deve possibilitar ao usuário a escolha da operação desejada, a exibição do resultado
                e a volta ao menu de opções. O programa só termina quando for escolhida a opção de saída(opção 5).
  POR Luís H.
*/
#include <stdio.h>

int main()
{
    int opcao;
    int num1;
    int num2;

    do
    {
        printf("ADICAO        (OPCAO 1)\n");
        printf("SUBTRACAO     (OPCAO 2)\n");
        printf("MULTIPLICACAO (OPCAO 3)\n");
        printf("DIVISAO       (OPCAO 4)\n");
        printf("SAIDA         (OPCAO 5)\n");
        printf("=======================\n");

        printf("Digite uma opcao: ");
        scanf("%d", &opcao);
        printf("\n");

        if((opcao > 0) && (opcao < 5))
            {
               printf("Digite dois valores: ");
               scanf("%d%d",&num1, &num2);
               printf("\n");
            }

        switch(opcao)
        {
           case 1:
                   printf("Soma: %d\n\n", num1 + num2);
                   break;
           case 2:
                   printf("Subtracao: %d\n\n", num1 - num2);
                   break;
           case 3:
                   printf("Multiplicacao: %d\n\n", num1 * num2);
                   break;
           case 4:
                   while(num2 == 0)
                   {
                      printf("Nao existe divisao por zero!\n\n");
                      printf("Digite outro valor: ");
                      scanf("%d", &num2);
                      printf("\n");
                   }
                   printf("Divisao: %d\n\n", num1 / num2);
                   break;
           case 5:
                   printf("Saindo\n\n");
                   return 1;
                   break;
           default:
                   printf("Opcao invalida!\n\n");
                   printf("Digite outra opcao: ");
                   printf("\n");
        }
    } while(opcao != 5);
    return 0;
}
