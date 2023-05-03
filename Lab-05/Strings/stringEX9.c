/*
  	STRINGS
  	
  Atividade 9: Faça um programa que preencha uma matriz de string com os modelos de cinco carros
               (exemplos de modelos: Fusca, Gol, Vectra, etc.). Em seguida, preencha um vetor com o consumo
                desses carros, isto é, quantos quilômetros cada um deles faz com um litro de combustível.
                              Calcule e mostre:
                               (a) O modelo de carro mais econômico;
                               (b) Quantos litros de combustível cada um dos carros cadastrados consome para
                                   percorrer uma distância de 1.000 quilômetros.
  POR LUÍS H.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char str[5][100];
  float consumo[5];
  float maior = 0;
  int i, j;
  int eco;

  for (i = 0; i < 5; i++)
  {
    printf("Digite o modelo do carro %d: ", i + 1);
    fgets(str[i], 100, stdin);

    str[i][strlen(str[i]) - 1] = '\0';

    printf("Digite o consumo do carro %d: ", i + 1);
    scanf("%f", &consumo[i]);
    getchar();
  }

  for(i = 0; i < 5; i++)
  {
      if(consumo[i] > maior)
      {
          maior = consumo[i];
          eco = i;
      }
  }
  printf("O carro mais economico eh: %s\n", str[eco]);

  for(i = 0; i < 5; i++)
  {
      printf("O carro %s consome %.1f litros para percorrer 1000km\n", str[i], 1000 / consumo[i]);
  }
  return 0;
}
