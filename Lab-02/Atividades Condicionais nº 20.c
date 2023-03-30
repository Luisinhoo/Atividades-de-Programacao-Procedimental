/*
  Atividade 20: Dados três valores, A, B, C, verificar se eles podem ser valores dos lados de um triangulo e,
                se forem, se é um triângulo escaleno, equilátero ou isósceles, considerando os seguintes
                conceitos:
                -> O comprimento de cada lado de um triângulo é menor do que a soma dos outros dois lados;
                -> Chama-se equilátero o triângulo que tem três lados iguais;
                -> Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais;
                -> Recebe o nome de escaleno o triângulo que tem os três lados diferentes;
  POR LUÍS H.
*/

#include <stdio.h>

int main()
{
    float A;  //primeiro valor
    float B;  //segundo valor
    float C;  //terceiro valor

    printf("Digite um valor para A: ");
    scanf("%f", &A);

    printf("Digite um valor para B: ");
    scanf("%f", &B);

    printf("Digite um valor para C: ");
    scanf("%f", &C);

    if((A == B) && (A == C) && (B == C))
    {
         printf("Seu triangulo eh EQUILATERO!\n", A, B, C);
    }

    else if((A == B) || (A == C) || (B == C))
    {
        printf("Seu triangulo eh ISOCELES!\n", A, B, C);
    }

    else if((A != B) && (A != C) && (B !=C))
    {
        printf("Seu triangulo eh ESCALENO!\n", A, B, C);
    }

    return 0;
}
