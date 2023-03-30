/*
  Atividade 26: Leia a distância em Km e a quantidade de litros de gasolina consumidos por um carro em um
                percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo com a tabela abaixo:

                          CONSUMO  | (Km/l)  |  MENSAGEM
                        menor que  |   8     |  Venda o carro!
                           entre   | 8 e 14  |  Econômico!
                        maior que  |   14    | Super econômico!
  POR LUÍS H.
*/
#include <stdio.h>

int main()
{
    float Km;
    float litrosg; //litros de gasolina
    float consumo;

    printf("Digite a distancia em Km: ");
    scanf("%f", &Km);

    printf("Agora digite a quantidade de litros de gasolina consumidos: ");
    scanf("%f", &litrosg);

    consumo = Km / litrosg;

    if(consumo < 8)
    {
        printf("Venda o carro!\n", consumo);
    }

    else if((consumo >= 8) || (consumo <= 14))
    {
        printf("Economico!\n", consumo);
    }

    else if(consumo > 14)
    {
        printf("Super economico!\n", consumo);
    }
    return 0;
}
