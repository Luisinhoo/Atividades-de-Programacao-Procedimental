/*
    Atividade 10: Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso
                  ideal, utilizando as seguintes fórmulas (onde h corresponde à altura):
                            *Homens: (72,7 * h) – 58,0
                            *Mulheres: (62,1 * h) – 44,7
    Por Luís H.
*/
#include <stdio.h>

int main()
{
    float h; //altura
    float pesoIdeal;
    char sexo;

    printf("Agora digite o seu sexo (F/M): ");
    scanf("%c", &sexo);

    printf("Digite a sua altura: ");
    scanf("%f", &h);

    if((sexo == 'M') || (sexo == 'm'))
    {
        pesoIdeal = (72.7 * h) - 58.0;
        printf("O seu peso ideal, como sexo masculino, eh: %.2f\n", pesoIdeal);
    }

    else if((sexo == 'F') || (sexo == 'f'))
    {
        pesoIdeal = (62.1 * h) - 44.7;
        printf("O seu peso ideal, como sexo feminino, eh: %.2f\n", pesoIdeal);
    }
    return 0;
}
