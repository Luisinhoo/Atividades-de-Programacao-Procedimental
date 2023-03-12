/*
   Atividade 31: Leia um número inteiro e imprima o seu antecessor e o seu sucessor.
    Por Luís H.
*/
#include <stdio.h>

int main()
{
  int n; //número
  int ant; //antecessor
  int suc; //sucessor

  printf("Digite um numero inteiro qualquer ");
  scanf("%d", &n);

  ant = n - 1;
  suc = n + 1;

  printf("Antecessor: %d\n", ant);
  printf("Sucessor: %d\n", suc);
  return 0;
}
