/*
	VETORES 
	
  Atividade 7 de VETORES: Faça um programa que receba 6 números inteiros e mostre:
                             - Os números pares digitados;
                             - A soma dos números pares digitados;
                             - Os números ímpares digitados;
                             - A quantidade de números ímpares digitados;
  POR LUÍS H.
*/
#include <stdio.h>

int main()
{
  int num[6];
  int i;
  int somaP = 0; //soma dos pares
  int quantidadeI = 0;//quantidade de impares

  for(i = 0; i < 6; i++)
  {
    printf("Digite o %dº valor: ", i+1);
    scanf("%d", &num[i]);
  }

  for(i = 0; i< 6; i++)
  {
        //- Os números pares digitados;
       if(num[i] % 2 == 0)
       {
           printf("PARES: %d\n", num[i]);
           //- A soma dos números pares digitados;
           somaP += num[i];
       }

      //- Os números ímpares digitados;
      else
      {
          printf("IMPARES: %d\n", num[i]);
          //- A quantidade de números ímpares digitados;
          quantidadeI++;
      }
  }

  printf("Soma dos PARES: %d\n", somaP);
  printf("\n");
  printf("Quantidade de IMPARES: %d\n", quantidadeI);
  return 0;
}
