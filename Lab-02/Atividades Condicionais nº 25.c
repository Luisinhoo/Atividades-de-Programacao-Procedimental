/*
  Atividade: Calcule as raízes da equação de 2º grau.
             Lembrando que:
                        x = -b ± √delta /2a

             Onde
                        delta = b² - 4ac

                       E ax² + bx + c = 0 representa uma equação do 2º grau.
            A variável a tem que ser diferente de zero. Caso seja igual, imprima a mensagem “Não é
            equação de segundo grau”.
            -> Se delta < 0, não existe real. Imprima a mensagem “Não existe raiz”.
            -> Se delta = 0, existe uma raiz real. Imprima a raiz e a mensagem “Raiz única”.
            -> Se delta >= 0, imprima as duas raízes reais.
  POR LUÍS H.
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int delta;
    int x;
    int x2;
    int a;
    int b;
    int c;
    int eq; //equação

    printf("Digite um valor para a: ");
    scanf("%d", &a);

    printf("Agora digite um valor para b: ");
    scanf("%d",&b);

    printf("Por fim, digite um valor par c: ");
    scanf("%d", &c);

    eq = (a * a) + b + c;

    if(a == 0)
    {
        printf("Não eh equação de segundo grau\n");
    }

    else
    {

        delta = (b * b) - 4 * a * c;
        printf("Delta = %d\n", delta);

        if(delta < 0)
        {
            printf("NAO EXISTE RAIZ REAL\n");
        }

       else if(delta = 0)
        {
            x = (-b + sqrt(delta)) / (2 * a);
            printf("x = %d\n", x);
            printf("RAIZ UNICA\n");
        }

        else if(delta >= 0)
        {
            x = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("x = %d", x);
            printf("x2 = %d\n", x2);
        }
    }
    return 0;
}
