/*
   Atividade 4: Leia um n¨²mero real e imprima o resultado do quadrado desse 
   		n¨²mero.
   Por Lu¨ªs H.
*/
#include <stdio.h>

int main()
{
    float num; //numero real
    float resultado;

    printf("Digite um numero real: ");
    scanf("%f", &num);

    resultado = (num * num);

    printf("Resultado: %.2f", resultado);
    return 0;
}
