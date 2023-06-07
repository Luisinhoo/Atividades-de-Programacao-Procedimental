/*
    Atividade 14: Implemente uma função que calcule as raízes de uma equação do segundo
                  grau do tipo Ax² + Bx + C = 0.
                  Lembrando que:
                        x = (-B ± √Δ) / (2 * A)
                        
                  Onde:
                        Δ=b²−4 ac
                        
                  A variável a tem que ser diferente de zero.
                        - Se < 0, não existe real;
                        - Se = 0, existe uma raiz real;
                        - Se ≥ 0, existem duas raízes reais.
                  Essa função deve obedecer ao seguinte protótipo:
                        int raizes(float A, float B, float C, float *X1, float *X2);
                        
                  Essa função deve ter como valor de retorno o número de raízes reais e
                  distintas da equação. Se existirem raízes reais, seus valores devem ser
                  armazenados nas variáveis apontadas por X1 e X2.
    Por Luís H.
*/
#include <stdio.h>
#include <math.h>

float calcularDelta(float A, float B, float C, float *X1, float *X2);
int main() 
{
    float A, B, C, X1, X2;
    int resultado;
    
    printf("Digite um valor qualquer para A: ");
    scanf("%f", &A);
    
    printf("Agora digite um valor qualquer para B: ");
    scanf("%f", &B);
    
    printf("por fim digite um valor qualquer para C: ");
    scanf("%f", &C);
    
    
    resultado = calcularDelta(A, B, C, &X1, &X2);
    
    if(resultado == -1)
    {
        printf("O coeficiente A deve ser diferente de zero!");
    }
    else if(resultado == 0)
    {
        printf("Nao existe raiz real!");
    }
    else if(resultado == 1)
    {
        printf("Existe uma raiz real: X = %.2f\n", X1);
    }
    
    else
    {
        printf("Existem duas raizes reais: X1 = %.2f, X2 = %.2f\n", X1, X2);
    }

    return 0;
}

float calcularDelta(float A, float B, float C, float *X1, float *X2)
{
    float delta;
    
    if(A == 0)
    {
        return -1;
    }
    
    delta = (B * B) - (4 * A * C);
    
    if(delta < 0)
    {
        return 0;
    }
    
    else if(delta == 0)
    {
        *X1 = -B/ (2 * A);
        return 1;
    }
    
    else 
    {
        *X1 = (-B + sqrt(delta)) / (2 * A);
        *X2 = (-B - sqrt(delta)) / (2 * A);
        return 2;
    }
}
