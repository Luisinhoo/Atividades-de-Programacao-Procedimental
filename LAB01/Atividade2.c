/*
   Fa�0�4a um programa que leia um n��mero real e o imprima.
   Por Lu��s H.
*/
#include <stdio.h>

int main()
{
    float num; //numero real

    printf("Digite um numero real: ");
    scanf("%f", &num);

    printf("O numero digitado foi: %.2f\n", num);

    return 0;
}
