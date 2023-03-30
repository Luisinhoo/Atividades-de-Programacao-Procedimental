/*
  Atividade 11:  Escreva um programa que leia um número inteiro maior do que zero e devolva, na tela, a
                 soma de todos os seus algarismos. Por exemplo, ao número 251 corresponderá o valor 8 (2 + 5
                 + 1). Se o número lido não for maior do que zero, o programa terminará com a mensagem:
                 “Número inválido”
  Por Luís H.
*/
#include <stdio.h>

int main()
{
       int num;
       int soma = 0;


   printf("Digite um numero qualquer: ");
   scanf("%d",&num);

   if(num > 0)
   {
       while(num > 0)
        {
            soma += (num % 10);
            num /= 10;
        }
        printf("\nA soma todos os algarismos eh: %d\n", soma);

   }
   else
   {

       printf("Numero invalido!\n");

   }
   return 0;
}
