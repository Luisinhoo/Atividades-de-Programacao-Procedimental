/*
  Atividade 19: Escreva um programa que receba como entrada o valor do saque realizado pelo cliente de
                um banco e retorne quantas notas de cada valor serão necessárias para atender ao saque com
                a menor quantidade de notas possível. Serão utilizadas notas de 100, 50, 20, 10, 5, 2 e 1 real.
  Por Luís H.
*/
#include <stdio.h>

int main()
{
  int valor;
  int notas100;
  int notas50;
  int notas20;
  int notas10;
  int notas5;
  int notas2;
  int notas1;
  printf("Digite o valor do saque: ");
  scanf("%d", &valor);
  
  notas100 = valor / 100;
  valor = valor % 100;
  
  notas50 = valor / 50;
  valor = valor % 50;
  
  notas20 = valor / 20;
  valor = valor % 20;
  
  notas10 = valor / 10;
  valor = valor % 10;
  
  notas5 = valor / 5;
  valor = valor % 5;
  
  notas2 = valor / 2;
  valor = valor % 2;
  
  notas1 = valor / 1;
  valor = valor % 1;
  
  printf("Notas de 100: %d\n", notas100);
  printf("Notas de 50: %d\n", notas50);
  printf("Notas de 20: %d\n", notas20);
  printf("Notas de 10: %d\n", notas10);
  printf("Notas de 5: %d\n", notas5);
  printf("Notas de 2: %d\n", notas2);
  printf("Notas de 1: %d\n", notas1);
  return 0;
}
