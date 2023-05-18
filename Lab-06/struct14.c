/*
   Atividade 14: Faça um programa que leia um vetor com os dados de 5 carros: marca (máximo 15 letras),
                ano e preço. Leia um valor p e mostre as informações de todos os carros com preço menor
                que p. Repita este processo até que seja lido um valor p = 0.
   Por Luís H.

*/
#include <stdio.h>

struct Carro
{
  char marca[15];
  int ano;
  float preco;
};
typedef struct Carro Carro;

int main()
{
  Carro c[5];
  int i;
  float p;
  
  for(i = 0; i < 5; i++)
  {
    printf("Digite a marca do %dº carro: ", i + 1);
    setbuf(stdin, NULL);
    fgets(c[i].marca, 15, stdin);
    
    printf("Digite o ano do %dº carro: ", i + 1);
    scanf("%d", &c[i].ano);
    
    printf("Digite o preço do %dº carro: ", i + 1);
    scanf("%f", &c[i].preco);
    printf("\n");
  }
  
  printf("Digite um valor para p: ");
  scanf("%f", &p);
  
  while (p != 0)
  {
    for(i = 0; i < 5; i++)
    {
      if (c[i].preco < p)
      {
        printf("Marca: %s\nAno: %d\nPreco: %.2f\n\n", c[i].marca, c[i].ano, c[i].preco);
      }
    }
    printf("Digite um valor para p: ");
    scanf("%f", &p);
  }
  return 0;
}
