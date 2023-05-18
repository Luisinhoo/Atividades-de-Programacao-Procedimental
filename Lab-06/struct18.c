/*
   Atividade 18: Faça um programa que controle o fluxo de voos nos aeroportos de um país. Com V = 5 (voos)
                 e A = 5 (aeroportos) e:
		         → Crie e leia um vetor de voos, sendo que cada voo contém um código de aeroporto de
		           origem e um de destino;
		         → Crie um vetor de aeroportos, sendo que cada aeroporto contém seu código, quantidade
		           de voos que saem e quantidade de voos que chegam.
                Nota: Cada aeroporto é identificado por um código inteiro entre 0 e (A-1). Não aceite
                      aeroportos de código inexistente.
   Por Luís H.

*/
#include <stdio.h>

struct Voo
{
  int codigoOrigem;
  int codigoD; //codigo do destino
};
typedef struct Voo Voo;

struct Aeroporto
{
  int codigo;
  int voosSaindo;
  int voosChegando;
};
typedef struct Aeroporto Aeroporto;

int main()
{
  Voo voos[5];
  Aeroporto a[5];
  int i, j;
  
  for( i = 0; i < 5; i++)
  {
    printf("Digite o codigo do aeroporto de origem do %dº voo: ", i + 1);
    scanf("%d", &voos[i].codigoOrigem);
    
    printf("Digite o codigo do aeroporto de destino do %dº voo: ", i + 1);
    scanf("%d", &voos[i].codigoD);
    printf("\n");
  }

  for(i = 0; i < 5; i++)
  {
    printf("Digite o codigo do %dº aeroporto: ", i + 1);
    scanf("%d", &a[i].codigo);
    
    a[i].voosSaindo = 0;
    a[i].voosChegando = 0;
    printf("\n");
  }

  for (int i = 0; i < 5; i++)
  {
    for(j = 0; j < 5; j++)
    {
      if (voos[i].codigoOrigem == a[j].codigo)
      {
        a[j].voosSaindo++;
      }
      if (voos[i].codigoD == a[j].codigo)
      {
        a[j].voosChegando++;
      }
    }
  }

  for(i = 0; i < 5; i++)
  {
    printf("Aeroporto %d: %d voos saindo e %d voos chegando\n", a[i].codigo, a[i].voosSaindo, a[i].voosChegando);
  }
  return 0;
}
