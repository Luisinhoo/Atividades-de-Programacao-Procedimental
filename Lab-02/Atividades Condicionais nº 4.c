/*
    Atividade 4: . Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
                            *O número digitado ao quadrado
                            *A raiz quadrada do número digitado
    Por Luís H.
*/
#include <stdio.h>
#include <math.h>//Fornece um conjunto de funções para operações matemáticas

int main()
{
    int num;
    int raiz, quadrado;

    printf("Digite um numero qualquer: ");
    scanf("%d", &num);

    //caso ele seja positivo
    if(num > 0)
    {
        //*O número digitado ao quadrado
        quadrado = (num * num);
        printf("\nO quadrado de %d = %d\n", num, quadrado);

        //*A raiz quadrada do número digitado
        raiz = sqrt(num);
        printf("A raiz quadrada de %d = %d\n", num, raiz);
    }
    else
    {
        printf("\nNumero invalido!\n");
    }
    return 0;
}
