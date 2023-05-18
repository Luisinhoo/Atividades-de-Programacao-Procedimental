/*
   Atividade 20: Escreva um programa que receba dois structs do tipo “dma”, cada um representando uma
                 data válida, e calcule o número de dias que decorreram entre as duas datas.
                       struct dma 
                       {
                          int dia;
                          int mes;
                          int ano;
                       };
   Por Luís H.
*/
#include <stdio.h>

struct dma
{
  int dia;
  int mes;
  int ano;
};
typedef struct dma DMA;

int main()
{
  DMA data1, data2;
  int DIA1, DIA2, resultado;
  
  printf("Digite a primeira data: ");
  scanf("%d/%d/%d", &data1.dia, &data1.mes, &data1.ano);

  printf("Digite a segunda data :\n");
  scanf("%d/%d/%d", &data2.dia, &data2.mes, &data2.ano);

  DIA1 = data1.dia + (data1.mes * 30) + (data1.ano * 365);
  DIA2 = data2.dia + (data2.mes * 30) + (data2.ano * 365);

  resultado = DIA2 - DIA1;

  printf("Dias passados: %d\n", resultado < 0 ? resultado * -1 : resultado);

  return 0;
}
