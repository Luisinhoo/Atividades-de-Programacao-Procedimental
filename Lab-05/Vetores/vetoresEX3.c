/*
	VETORES 
	
   Atividade 3 de VETORES: Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos na
                           ordem inversa.
   POR LUÍS H.
*/

#include <stdio.h>

int main()
{
   int i, num[6];
   printf("Digite 6 numeros inteiros\n");
   printf("\n");

   for(i=0; i<6; i++)
   {
       printf("Digite o %d valor: ", (i+1));
       scanf("%d", &num[i]);
   }

   printf("Ordem inversa\n");
   for(i=5; i>=0; i--)
   {
       printf("%d\n", num[i]);
   }
   return 0;
}
