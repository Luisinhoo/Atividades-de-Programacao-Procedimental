/*
   Peça ao usuáio para digitar três valores inteiros e imprimia a soma deles.
   Por Luís H.
*/
#include <stdio.h>

int main()
{
    int val1; //valor 1
    int val2; //valor 2
    int val3; //valor 3
    int soma;

    printf("Digite um valor inteiro: ");
    scanf("%d", &val1);
    printf("Agora, digite mais um valor inteiro: ");
    scanf("%d", &val2);
    printf("Por fim, digite mais um valor inteiro: ");
    scanf("%d", &val3);

    soma = val1+ val2 + val3;

    printf("A soma de todos esses numeros eh: %d\n", soma);

    return 0;
}
