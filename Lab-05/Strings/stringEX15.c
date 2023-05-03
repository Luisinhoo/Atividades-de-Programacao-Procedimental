/*
  	STRINGS
  	
  Atividade 15: Faça um programa que contenha um menu com as seguintes opções:
			a) Ler uma string S1 (tamanho máximo 20 caracteres);
			b) Imprimir o tamanho da string S1;
			c) Comparar a string S1 com uma nova string S2 fornecida pelo usuário e imprimir o
			resultado da comparação;
			d) Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da
			concatenação;
			e) Imprimir a string S1 de forma reversa;
			f) Contar quantas vezes um dado caractere aparece na string S1. Esse caractere desse
			ser informado pelo usuário;
			g) Substituir a primeira ocorrência do caractere C1 da string S1 pelo caractere C2. Os
			caracteres C1 e C2 serão lidos pelo usuário;h) Verificar se uma string S2 é substring de S1. A string S2 deve ser informada pelo
			usuário;
			i) Retornar uma substring da string S1. Para isso o usuário deve informar a partir de
			qual posição deve ser criada a substring e qual é o tamanho da substring.
  POR LUÍS H.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char str1[20], str2[20], str3[20];;
  char c1, c2, op;
  int i;
  int contador = 0, posicao, tamanho;

  do
  {
    printf("(a) Ler uma string S1 (tamanho máximo 20 caracteres);\n");
    printf("(b) Imprimir o tamanho da string S1;\n");
    printf("(c) Comparar a string S1 com uma nova string S2 fornecida pelo usuário e imprimir o resultado da comparação;\n");
    printf("(d) Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da concatenação;\n");
    printf("(e) Imprimir a string S1 de forma reversa;\n");
    printf("(f) Contar quantas vezes um dado caractere aparece na string S1. Esse caractere desse ser informado pelo usuário;\n");
    printf("(g) Substituir a primeira ocorrência do caractere C1 da string S1 pelo caractere C2. Os caracteres C1 e C2 serão lidos pelo usuário;\n");
    printf("(h) Verificar se uma string S2 é substring de S1. A string S2 deve ser informada pelo usuário;\n");
    printf("(i) Retornar uma substring da string S1. Para isso o usuário deve informar a partir de qual posição deve ser criada a substring e qual é o tamanho da substring.\n");

    printf("Digite a opção desejada:\n");
    scanf("%c", &op);
    getchar();

    switch (op)
    {
        case 'a':
                  printf("\nDigite a string S1:\n");
                  fgets(str1, 20, stdin);
                  str1[strlen(str1) - 1] = '\0';
                  break;
        case 'b':
                  printf("O tamanho da string S1 eh: %d\n", strlen(str1));
                  break;
        case 'c':
                  printf("Digite a string S2: ");
                  fgets(str2, 20, stdin);
                  printf(strcmp(str1, str2) ? "As strings sao diferentes\n" : "As strings sao iguais\n");
                  break;
        case 'd':
                  printf("Digite a string S2: ");
                  fgets(str2, 20, stdin);
                  printf("O resultado da concatenacao eh: %s\n", strcat(str1, str2));
                  break;
        case 'e':
                  for(i = strlen(str1) - 1; i >= 0; i--)
                  {
                      printf("%c", str1[i]);
                  }
                  printf("\n");
                  break;
        case 'f':
                  printf("Digite o caractere: ");
                  scanf("%c", &c1);

                  for(i = 0; str1[i] != '\0'; i++)
                  {
                      if(str1[i] == c1)
                      {
                          contador++;
                      }
                  }
                  printf("O caractere %c aparece %d vezes na string S1\n", c1, contador);
                  break;
        case 'g':
                  printf("Digite o caractere C1: ");
                  scanf("%c", &c1);
                  printf("Digite o caractere C2: ");
                  scanf("%c", &c2);

                  for(i = 0; str1[i] != '\0'; i++)
                  {
                      if(str1[i] == c1)
                      {
                          str1[i] = c2;
                          break;
                      }
                  }
                  printf("A string S1 agora eh: %s\n", str1);
                  break;
        case 'h':
                  printf("Digite a string S2: ");
                  fgets(str2, 20, stdin);

                  if(strstr(str1, str2) != NULL)
                  {
                      printf("A string S2 eh substring de S1\n");
                  }

                  else
                  {
                      printf("A string S2 nao eh substring de S1\n");
                  }
                  break;
        case 'i':
                  printf("Digite a posição: ");
                  scanf("%d", &posicao);
                  printf("Digite o tamanho: ");
                  scanf("%d", &tamanho);

                  for(i = posicao; i <= tamanho; i++)
                  {
                      str3[i] = str1[posicao + i];
                  }
                  str3[i + 1] = '\0';

                  printf("A substring eh: %s\n", str3);
                  break;
    }
  }
  while((op >= 'a') || (op <= 'i'));
  return 0;
}
