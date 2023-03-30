/*
  Atividade 17:   Faça um programa que calcule e mostre a área de um trapézio. Sabe-se que:


                       A = ((basemaior + basemenor) * altura) / 2
                  Lembre-se a base maior e a base menor devem ser números maiores que zero.
  POR LUÍS H.
*/
#include <stdio.h>

int main()
{
    int basemaior; //base maior
    int basemenor; //base menor
    int A; //área
    int altura; //altura

    printf("Digite o valor da BASE MAIOR: ");
    scanf("%d", &basemaior);

    printf("Agora digite o valor da BASE MENOR: ");
    scanf("%d", &basemenor);

    printf("Por fim digite o valor da ALTURA: ");
    scanf("%d", &altura);

    if(basemaior > 0 && basemenor > 0)
    {
        A = ((basemaior + basemenor) * altura) / 2;

        printf("O valor da area deste trapezio eh: %d\n", A);
    }
    else
    {
        printf("AS BASES PRECISAM SER MAIORES QUE ZERO\n");
    }
    return 0;
}
