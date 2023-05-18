/*
   Atividade 16: Faça um programa que seja uma agenda de compromissos e:
                    → Crie e leia um vetor de 5 estruturas de dados com: compromisso (máximo 60 letras) e
                      data. A data deve ser outra estrutura de dados contendo dia, mês e ano;
                    → Leia dois inteiros M e A e mostre todos os compromissos do mês M do ano A. Repita o
                      procedimento até ler M = 0.
   Por Luís H.

*/
#include <stdio.h>

struct Data
{
  int dia;
  int mes;
  int ano;
};
typedef struct Data Data;

struct Compromisso
{
  char compromisso[30];
  struct Data data;
};
typedef struct Compromisso Compromisso;

int main()
{
  Compromisso comp[5];
  int i;
  int MES, ANO;
  
  for (int i = 0; i < 5; i++)
  {
    printf("Digite o %dº compromisso: ", i + 1);
    setbuf(stdin, NULL);
    fgets(comp[i].compromisso, 60, stdin); 
    
    printf("Digite o dia do %dº compromisso: ", i + 1);
    scanf("%d", &comp[i].data.dia);
    
    printf("Digite o mes do %dº compromisso: ", i + 1);
    scanf("%d", &comp[i].data.mes);
    
    printf("Digite o ano do %dº compromisso: ", i + 1);
    scanf("%d", &comp[i].data.ano);
    printf("\n");
  }

  printf("Digite um mes: ");
  scanf("%d", &MES);
  
  printf("Digite um ano: ");
  scanf("%d", &ANO);
  
  while (MES != 0)
  {
    for(i = 0; i < 5; i++)
    {
      if((comp[i].data.mes == MES) && (comp[i].data.ano == ANO))
      {
        printf("Compromisso: %s\nDia: %d\nMes: %d\nAno: %d\n\n", comp[i].compromisso, comp[i].data.dia, comp[i].data.mes, comp[i].data.ano);
      }
    }
    printf("Digite um mes: ");
    scanf("%d", &MES);
    
    printf("Digite um ano: ");
    scanf("%d", &ANO);
  }
  return 0;
}
