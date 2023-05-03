/*
	VETORES 
	
  Atividade 8 de VETROES: Faça um programa para ler 10 números DIFERENTES a serem armazenados em um vetor. Os
                          dados deverão ser armazenados no vetor na ordem que forem sendo lidos, sendo que caso
                          o usuário digite um número que já foi digitado anteriormente, o programa deverá pedir para
                          ele digitar outro número. Note que cada valor digitado pelo usuário deve ser pesquisado no
                          vetor, verificando se ele existe entre os números que já foram fornecidos. Exibir na tela o
                          vetor final que foi digitado.
  POR LUÍS H.
*/
#include <stdio.h>

int main()
{
  int num[10];
  int i, j;
  int valor;
  int numExiste = 0;

  for(i = 0; i < 10; i++)
  {
    printf("Digite o %dº valor: ", i+1);
    scanf("%d", &valor);

    for (j = 0; j < i; j++)
    {
      if (num[j] == valor)
      {
        numExiste = 1;
      }
    }

    if(numExiste)
    {
      i--;
    }

    num[i] = valor;
  }

  for (int i = 0; i < 10; i++)
  {
    printf("%d\n", num[i]);
  }

  return 0;
}
