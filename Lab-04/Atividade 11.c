/*
 Atividade 11: Elabore uma função que receba três notas de um aluno como parâmetros e uma letra. Se a
               letra for A, a função deverá calcular a média aritmética das notas do aluno; se for P, deverá
               calcular a média ponderada, com pesos 5, 3 e 2.
 Por Luís H.
*/
#include <stdio.h>
#include <stdlib.h>

float media(float n1, float n2, float n3, char op);

int main()
{
    float nt1, nt2, nt3, calculo;
    char op;

    printf("Digite a opção [A ou P]: ");
    scanf("%c", &op);
    
    fflush(stdin);

    printf("Digite as tres notas: ");
    scanf("%f %f %f", &nt1, &nt2, &nt3);

    calculo = media(nt1, nt2, nt3, op);

    printf("Media = %.1f", calculo);

    return 0;
}

float media(float n1, float n2, float n3, char op)
{
    if ((op == 'A') || (op == 'a'))
    {
        return (n1 + n2 + n3) / 3;
    }
    else if ((op == 'P') || (op == 'p'))
    {
        return ((n1 * 5) + (n2 * 3) + (n3 * 2)) / 10;
    }
}
