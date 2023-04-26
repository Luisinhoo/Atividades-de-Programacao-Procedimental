/*
  Atividade 14: Faça uma função que receba a distância em Km e a quantidade de litros de gasolina
                consumidos por um carro em um percurso, calcule o consumo em Km/l e escreva uma
                mensagem de acordo com a tabela abaixo:
                             CONSUMO | (Km/l) | MENSAGEM
                        menor que    |   8    | Venda o carro!
                          entre      | 8 e 14 | Econômico!
                        maior que    |   14   | Super econômico!
  Por Luís H.
*/
#include <stdio.h>

float receberDistancia(float km, float litros, float consumo);

int main()
{
     float km, litros, consumo, resultado;

     printf("Digite a distancia percorrida: ");
     scanf("%f", &km);

     printf("Agora digite quantos litros foram consumidos: ");
     scanf("%f", &litros);

     consumo = km / litros;
     resultado = receberDistancia(km, litros, consumo);
     return 0;
}

float receberDistancia(float km, float litros, float consumo)
{
    if(consumo < 8)
    {
        printf("Venda o carro!\n");
    }

    else if((consumo >= 8) && (consumo <= 14))
    {
        printf("Economico!\n");
    }

    else if(consumo > 14)
    {
        printf("Super Economico!\n");
    }

    return consumo;
}
