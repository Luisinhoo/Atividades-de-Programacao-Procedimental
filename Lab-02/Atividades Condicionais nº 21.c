/*
  Atividade 21: Escreva o menu de opções abaixo. Leia a opção do usuário e execute a operação escolhida.
                Escreva uma mensagem de erro se a opção for inválida.
                Escolha a opção:
                      1- Soma de 2 números.
                      2- Diferença entre 2 números (maior pelo menor).
                      3- Produto entre 2 números.
                      4- Divisão entre 2 números (o denominador não pode ser zero).
                      Opção
  POR LUÍS H.
*/
#include <stdio.h>

int main()
{
    int op; //opção
    int resultado; //resultado das operações
    int num1; //primeiro número
    int num2; //segundo número

    printf("OPCOES:\n");
    printf("1- Soma de 2 numeros\n");
    printf("2- Diferenca entre 2 numeros (maior pelo menor)\n");
    printf("3- Produto entre 2 numeros\n");
    printf("4- Divisao entre 2 numeros (o denominador nao pode ser zero)\n");

    printf("Escolha uma das 4 opcoes disponiveis: ");
    scanf("%d", &op);

    printf("Digite um valor inteiro: ");
    scanf("%d", &num1);

    printf("Agora digite outro valor inteiro: ");
    scanf("%d", &num2);

    if(op == 1)
    {
        resultado = num1 + num2;
        printf("Soma eh: %d\n", resultado);
    }

    else if(op == 2)
    {
        if(num1 > num2)
        {
            resultado = num1 - num2;
            printf("Diferenca eh: %d\n", resultado);
        }

        else
        {
            resultado = num2 - num1;
            printf("Diferenca eh: %d\n", resultado);
        }
    }

    else if(op == 3)
    {
        resultado = num1 * num2;
        printf("Produto eh: %d\n", resultado);
    }

    else if(op == 4)
    {
        if(num2 == 0)
        {
            printf("DENOMINADOR NAO PODE SER 0\n", num2);
        }

        else
        {
            resultado = num1 / num2;
            printf("Divisao eh: %d\n", resultado);
        }

    }

    else
    {
        printf("OPCAO INVALIDA\n");
    }
    return 0;
}
