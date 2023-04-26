/*
   Atividade 15: Crie um programa que receba três valores (obrigatoriamente maiores que zero),
                 representando as medidas dos três lados de um triângulo. Elabore funções para:
                     a) Determinar se eles lados formam um triângulo, sabendo que:
                        ¹ O comprimento de cada lado de um triângulo é menor do que a soma dos outros dois lados.
                     b) Determinar e mostrar o tipo de triângulo, caso as medidas formem um triângulo. Sendo que:
                        ¹ Chama-se equilátero o triângulo que tem três lados iguais;
                        ² Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais;
                        ³ Recebe o nome de escaleno o triângulo que tem os três lados diferentes.
   Por Luís H.
*/
#include <stdio.h>

float mostrarTipoTriangulo(float valor1, float valor2, float valor3);

int main()
{
    float valor1, valor2, valor3, comprimento, resultado;

    printf("Digite o valor do primeiro lado do triangulo: ");
    scanf("%f", &valor1);

    printf("Agora digite o valor do segundo lado do triangulo: ");
    scanf("%f", &valor2);

    printf("Por fim, digite o terceito lado do triangulo: ");
    scanf("%f", &valor3);

    resultado = mostrarTipoTriangulo(valor1, valor2, valor3);

    return 0;
}

float mostrarTipoTriangulo(float valor1, float valor2, float valor3)
{
    float comprimento;
    //parte A
    if(comprimento < valor1 + valor2 + valor3)
    {
        printf("Isso forma um triangulo\n");
        printf("\n");

        //parte B
        if((valor1 == valor2) && (valor2 == valor3))
        {
            printf("Esse triangulo eh EQUILATERO\n");
        }

        else if((valor1 == valor2) && (valor2 != valor3))
        {
            printf("Esse triangulo eh ISOCELES\n");
        }

        else if((valor1 != valor2) && (valor2 != valor3))
        {
            printf("Esse triangulo eh ESCALENO\n");
        }
    }
    else
    {
        printf("Isso nao forma um triangulo\n");
    }
    return comprimento;
}
