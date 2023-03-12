/*
  Atividade 45: Faça um programa para converter uma letra maiúscula em letra minúscula. Use a tabela
                ASCII para resolver o problema.
  Por Luís H.
*/
#include <stdio.h>

int main()

{
   char letra;
   int letraM = 'A'; //letra maiúscula
   int letram = 'a'; //letra minúscula
   int con; //converter letra

   printf("Digite uma letra MAIUSCULA: ");
   scanf("%c", &letra);

   con = letram - letraM;
   letra = letra + con;

   printf("MINUSCULA: %c\n",letra);
   return 0;
}

