/*
   Atividade 10: Utilizando uma estrutura, faça um programa que permita a entrada de nome, endereço e
                telefone de 5 pessoas e os imprima em ordem alfabética.
   POR LUÍS H.

*/
#include <stdio.h>
#include <string.h>

struct Pessoa
{
  char nome[40];
  char endereco[40];
  int telefone;
};
typedef struct Pessoa Pessoa;

int main()
{
  Pessoa a[5];
  int i, j;
  int ordem[5];
  int AUX;

  for(i = 0; i < 5; i++)
  {
    printf("Digite o nome da %dª pessoa: ", i + 1);
    setbuf(stdin, NULL);
    fgets(a[i].nome, 100, stdin);

    printf("Digite o endereço da %dª pessoa: ", i + 1);
    setbuf(stdin, NULL);
    fgets(a[i].endereco, 100, stdin);

    printf("Digite o telefone da %dª pessoa: ", i + 1);
    setbuf(stdin, NULL);
    scanf("%d", &a[i].telefone);
    printf("\n");
  }

  //colocar as pessoas em ordem alfabetica
  for(i = 0; i < 5; i++)
  {
    ordem[i] = i;
  }

  for(i = 0; i < 5; i++)
  {
    for(j = 0; j < 5; j++)
    {
      if(strcmp(a[ordem[i]].nome, a[ordem[j]].nome) < 0)
      {
        AUX = ordem[i];
        ordem[i] = ordem[j];
        ordem[j] = AUX;
      }
    }
  }

  for(i = 0; i < 5; i++)
  {
    printf("Nome: %s\n", a[ordem[i]].nome);
    printf("Endereco: %s\n", a[ordem[i]].endereco);
    printf("Telefone: %d\n", a[ordem[i]].telefone);
    printf("\n");
  }
  return 0;
}
