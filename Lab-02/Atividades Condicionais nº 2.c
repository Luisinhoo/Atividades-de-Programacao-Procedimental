/*
    Atividade 2: Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz quadrada
                 do número. Se o número for negativo, mostre uma mensagem dizendo que o número é inválido.
    Por Luís H.
*/
#include <stdio.h>
#include <math.h>//Fornece um conjunto de funções para operações matemáticas

int main()
{
    int num;
    int raiz;

    printf("Digite um numero qualquer: ");
    scanf("%d", &num);

    if(num > 0)
    {
        raiz = sqrt(num);
        printf("\nRaiz quadrada de %d = %d\n", num, raiz);
    }
    else
    {
        printf("\nEste numero eh invalido!\n");
    }
    return 0;
}
