/*
 Atividade 18: Faça um programa que mostre ao usuário um menu com 4 opções de operações
               matemáticas (as básicas, por exemplo). O usuário escolhe uma das opções e o seu programa
               então pede dois valores numéricos e realiza a operação, mostrando o resultado e saindo.
 POR LUÍS H.
*/
#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int op; //operação
    int marcador;
    int resultado;

    printf("Opcoes: \n");
    printf("1 - Subtraçao\n");
    printf("2 - Adiçao\n");
    printf("3 - Multiplicaçao\n");
    printf("4 - Divisao\n");

    printf("Dentre essas 4 opcoes, digite a escolhida: ");
    scanf("%d", &op);

    printf("Digite os dois valores que deseja nessa operacao: ");
    scanf("%d %d", &num1, &num2);

    switch(op)
    {
        case 1:
               resultado = num1 - num2;
               marcador == 1;
               break;

        case 2:
               resultado = num1 + num2;
               marcador == 1;
               break;

        case 3:
               resultado = num1 * num2;
               marcador == 1;
               break;

        case 4:
               resultado = num1 / num2;
               marcador == 1;
               break;

        default:
               printf("OPERACAO INVALIDA\n");
               marcador == 0;
               break;
    }

    if(marcador)
    {
        printf("RESULTADO = %d\n", resultado);
    }

    return 0;
}
