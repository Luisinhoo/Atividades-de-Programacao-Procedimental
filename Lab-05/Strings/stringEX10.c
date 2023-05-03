/*
  	STRINGS
  	
  Atividade 10: Ler o nome e o valor de uma determinada mercadoria de uma loja. Sabendo que o desconto
                para pagamento à vista é de 10% sobre o valor total, calcular o valor a ser pago à vista. Escrever
                o nome da mercadoria, o valor total, o valor do desconto e o valor a ser pago à vista.
  POR LUÍS H.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
  char nome[100];
  float valT, desconto, valVista;

  printf("Digite o nome e o valor da mercadoria: ");
  fgets(nome, 100, stdin);
  scanf("%f", &valT);

  desconto = valT * 0.1;

  valVista= valT - desconto;

  printf("Nome: %s\n", nome);

  printf("Valor total: %.2f\n", valT);

  printf("Desconto: %.2f\n", desconto);

  printf("Valor a vista: %.2f\n", valVista);
  return 0;
}
