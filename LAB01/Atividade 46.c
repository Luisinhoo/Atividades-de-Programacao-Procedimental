/*
  Atividade 46: Faça um programa que leia um número inteiro positivo de três dígitos (de 100 a 999). Gere
                outro número formado pelos dígitos invertidos do número lido. Exemplo:
                            ___________________
                           |numero_lido = 123  |
                           |numero_gerado = 321|
  Por Luís H.
*/
#include <stdio.h>

int main()
{
    int num1; //numeral 1
    int num2; //numeral 2
    int num3; //numeral 3
    int numeral; //número na ordem normal

    printf("Digite um numero de tres digitos: ");
    scanf("%d", &numeral);

    num1 = numeral % 10;
    numeral = numeral / 10;

    num2 = numeral % 10;
    numeral = numeral / 10;

    num3 = numeral % 10;
    numeral = numeral / 10;

    printf("A ordem inversa eh: %d%d%d\n", num1, num2, num3);
    return 0;
}
