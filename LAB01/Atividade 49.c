/*
  Atividade 49: Faça um programa para leia o horário (hora, minuto e segundo) de início e a duração, em
                segundos, de uma experiência biológica. O programa deve resultar com o novo horário (hora,
                minuto e segundo) do termino da mesma.
  Por Luís H.
*/
#include <stdio.h>

int main()
{
    int hor; //hora do experimento
    int m; //minitus do experimento
    int s; //segundos do experimento
    int h; //horas
    int min; //minutos
    int seg; //segundos
    int oqr; //o que resta na operação
    int l, u, i;

    printf("Digite o horario em que o experimento começou (EM HORAS MINUTOS E SEGUNDOS): ");
    scanf("%d %d %d", &hor, &m, &s);

    h = hor / 3600;

    oqr = hor % 3600;

    min = oqr / 60;

    seg = oqr % 60;

    l = h + hor;

    u = min + m;

    i = seg + s;

    printf("A duração deste experimento eh: %dh%dmin%dseg\n", l, u, i);
    return 0;
}
