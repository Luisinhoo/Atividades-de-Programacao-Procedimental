/*
   Atividade 5: Leia um numero real e imprima a quinta parte deste numero.
   Por Luís H.
*/
#include <stdio.h>

int main()
{
  float num; //numero real
  float quintaParte;

  printf("Digite um numero real: ");
  scanf("%f", &num);

  quintaParte = (num / 5);

  printf("A quinta parte deste numero eh: %.2f", quintaParte);
  return 0;
}
