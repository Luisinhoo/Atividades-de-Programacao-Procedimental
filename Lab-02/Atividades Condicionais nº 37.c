/*
  Atividade 37: As tarifas de certo parque de estacionamento são as seguintes:
                   -> 1a e 2a hora - R$1,00 cada;
                   -> 3a e 4a hora - R$1,40 cada;
                   -> 5a hora e seguintes - R$2,00 cada
                O número de horas a pagar é sempre inteiro e arredondado por excesso. Deste modo, quem
                estacionar durante 61 minutos pagará por duas horas, que é o mesmo que pagaria se tivesse
                permanecido 120 minutos. Os momentos de chegada ao parque e partida deste são
                apresentados na forma de pares de inteiros, representando horas e minutos. Por exemplo, o par
                12 50 representará “dez para a uma da tarde”. Pretende-se criar um programa que, lidos pelo
                teclado os momentos de chegada e de partida, escreva na tela o preço cobrado pelo
                estacionamento. Admite-se que a chegada e a partida se dão com intervalo não superior a 24
                horas. Portanto, se uma dada hora de chegada for superior à da partida, isso não é uma situação
                de erro, antes significará que a partida ocorreu no dia seguinte ao da chegada.
  POR LUÍS
*/
#include <stdio.h>

int main()
{
    int horac; //hora de chegada
    int minutoc; //minutos de chegada
    int horap; //hora de partida
    int minutop; //minutos de partida
    int tempoc; //tempo de chegada
    int tempop; //tempo de partida
    int perm; //tempo permanencido
    int horasperm; //hora de permanencia

    float totalp = 0; //total a pagar

    printf("Digite as horas e minutos de chegada: ");
    scanf("%d %d", &horac, &minutoc);

    printf("Digite as horas e minutos de partida: ");
    scanf("%d %d", &horap, &minutop);

    if(horac > horap)

    horac -= 24;
    tempoc = horac * 60 + minutoc;
    tempop = horap * 60 + minutop;
    perm = tempop - tempoc;

    if(perm % 60 > 0)
    {
        horasperm = (tempop / 60) + 1;
    }
    else
    {
        horasperm = tempop / 60;
    }

    if(horasperm <= 2)
    {
        totalp = horasperm * 1;
    }
    else if (horasperm <= 4)
    {
        totalp = horasperm * 1.4;
    }
    else
    {
        totalp = horasperm * 2;
    }

    printf("O total a pagar eh: R$%.2f", totalp);
    return 0;
}
