/*
    Atividade 3: Leia um número real. Se o número for positivo imprima a raiz quadrada. Do contrário, imprima
                 o número ao quadrado.
    Por Luís H.
*/
#include <stdio.h>
#include <math.h>//Fornece um conjunto de funções para operações matemáticas

int main()
{
    float num; //numero real
    float raiz, quadrado;

    printf("Digite um numero real qualquer: ");
    scanf("%f", &num);

    if(num > 0)
    {
        raiz = sqrt(num);
        printf("\nA raiz quadrda de %.1f = %.1f\n", num, raiz);
    }
    else
    {
        quadrado = (num * num);
        printf("\nO quadrado de %.1f = %.1f\n", num, quadrado);
    }
    return 0;
}
