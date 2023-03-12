/*
  Atividade 48: Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos.
  Por Luís H.
*/
#include <stdio.h>

int main()
{
    int sdu; //segundos digitados
    int h; //horas
    int min; //minutos
    int seg; //segundos
    int oqr; //o que resta na operação

    printf("Digite uma quantidade de segundos: ");
    scanf("%d", &sdu);

    h = sdu / 3600;

    oqr = sdu % 3600;

    min = oqr / 60;

    seg = oqr % 60;

    printf("%dh%dmin%dseg\n", h, min, seg);
    return 0;
}
