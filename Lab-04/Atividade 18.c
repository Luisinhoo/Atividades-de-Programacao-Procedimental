/*
  Atividade 18: Faça uma função que receba por parâmetro dois valores inteiros x e z. Calcule e retorne o
                resultado de x^z para o programa principal. Atenção não utilize nenhuma função pronta de
                exponenciação.
  Por Luís H.
*/
#include <stdio.h>

int eleva(int X, int Z);

int main()
{
    int X, Z, resultadoFinal;

    printf("Digite um valor para X: ");
    scanf("%d", &X);

    printf("Agora digite um valor para Z: ");
    scanf("%d", &Z);

    resultadoFinal = eleva(X, Z);

    printf("X^Z eh: %d\n", resultadoFinal);
    return 0;
}

int eleva(int X, int Z)
{
    int resultado = 1;

    for(int i=0 ; i < Z ; i++)
    {
        resultado *= X;
    }

    return resultado;
}
