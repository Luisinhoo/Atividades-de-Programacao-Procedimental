/*
   Atividade 17: Faça um programa que controla o consumo de energia dos eletrodomésticos de sua casa e:
		         → Crie e leia 5 eletrodomésticos que contém nome (máximo 15 letras), potência (real, em
		           kW) e tempo ativo por dia (real, em horas);
		         → Leia um tempo t (em dias), calcule e mostre o consumo total na casa e o consumo
		           relativo de cada eletrodoméstico (consumo/consumo total) nesse período de tempo.
                   Apresente este último dado em porcentagem.
   Por Luís H.

*/
#include <stdio.h>

struct Eletrodomestico
{
  char nome[15];
  float potencia;
  float tempoA; //tempo ativo por dia
};
typedef struct Eletrodomestico Eletrodomestico;

int main()
{
  Eletrodomestico eletrodomesticos[5];
  int i, t;
  float consumoT = 0; //consumo total
  
  for(i = 0; i < 5; i++)
  {
    printf("Digite o nome do %dº eletrodomestico: ", i + 1);
    setbuf(stdin, NULL);
    fgets(eletrodomesticos[i].nome, 15, stdin);    
    
    printf("Digite a potência do %dº eletrodomestico: ", i + 1);
    scanf("%f", &eletrodomesticos[i].potencia);
    
    printf("Digite o tempo ativo do %dº eletrodomestico: ", i + 1);
    scanf("%f", &eletrodomesticos[i].tempoA);
    printf("\n");
  }

  printf("Digite um valor para t: ");
  scanf("%d", &t);
  
  for(i = 0; i < 5; i++)
  {
    consumoT += eletrodomesticos[i].potencia * eletrodomesticos[i].tempoA * t;
  }
  printf("Consumo total: %.2f\n", consumoT);
  
  for(i = 0; i < 5; i++)
  {
    printf("Consumo relativo do eletrodomestico %d: %.2f%%\n", i + 1,(eletrodomesticos[i].potencia * eletrodomesticos[i].tempoA * t) / consumoT * 100);
  }
  return 0;
}
