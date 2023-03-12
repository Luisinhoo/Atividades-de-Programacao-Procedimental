/*
    Atividade 29: Leia quatro notas, calcule a média aritmética e imprima o resultado.
    Por Luís H.
*/
#include <stdio.h>

int main()
{
   float nt1; //nota 1
   float nt2; //nota 2
   float nt3; //nota 3
   float nt4; //nota 4
   float ma; //média aritmética

    printf("Digite a primeira nota: ");
    scanf("%f", &nt1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nt2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nt3);

    printf("Digite a quarta nota: ");
    scanf("%f", &nt4);

    ma = nt1 + nt2 + nt3 + nt4 / 4;

    printf("Resultado: %.1f\n", ma);
    return 0;
}
