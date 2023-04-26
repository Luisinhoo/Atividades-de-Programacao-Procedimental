/*
  Atividade 13: Faça uma função que receba dois valores numéricos e um símbolo. Este símbolo
                representará a operação que se deseja efetuar com os números. Se o símbolo for ‘+’ deverá
                ser realizada uma adição, se for ‘–‘ uma subtração, se for ‘*’ uma multiplicação e se for ‘/’
                será efetuada uma divisão.
  Por Luís H.
*/
#include <stdio.h>
#include <stdlib.h>

float operacao(char op, float num1, float num2);

int main()
{
    float num1, num2;
    char op;

    printf("Operadores: \n");
    printf("+ -> Adicao\n");
    printf("- -> Subtracao\n");
    printf("* -> Multiplicacao\n");
    printf("/ -> Divisao\n");

    printf("Digite um simbolo: ");
    scanf("%c", &op);
    
    printf("Digite dois numeros quaisquer: ");
    scanf("%f %f", &num1, &num2);

    printf("Resultado = %.2f\n", operacao(op, num1, num2));
    return 0;
}

float operacao(char op, float num1, float num2)
{
    switch(op)
    {
        case '+':
                return (num1 + num2);
                break;

        case '-':
                return (num1 - num2);
                break;

        case '*':
                return (num1 * num2);
                break;

        case '/':
                if(num2 == 0)
                {
                    printf("Denominador nao pode ser 0!\n");
                    break;
                }
                else
                {
                    return (num1 / num2);
                    break;
                }
                
        default:
                printf("Operacao invalida!\n");
    }
}
