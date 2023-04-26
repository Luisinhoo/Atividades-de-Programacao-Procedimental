/*
    Atividade 6: Faça uma função que receba 3 números inteiros como parâmetro, representando horas,
                 minutos e segundos, e os converta em segundos.
    Por Luís H.

*/
#include <stdio.h>

int converterSegundos(int h, int min, int s);
int main()
{
    int h, min, s; //h = horas; min = minutos; s = segundos
    int resultado;
    
    printf("Digite as horas, minutos e segundos: ");
    scanf("%d %d %d", &h, &min, &s);
    
    resultado = converterSegundos(h, min, s);
    
    printf("%dh%dmin e %ds convertido para segundos eh %ds\n", h, min, s, resultado);
    return 0;
}

int converterSegundos(int h, int min, int s)
{
    int calculo;
    
    calculo = (s + (min* 60) + (h * 60 * 60));
    return calculo;
}
