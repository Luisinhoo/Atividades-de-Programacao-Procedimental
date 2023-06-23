/*
  Atividade 4: Faça um programa que receba do usuário o tamanho de uma string e
               chame uma função para alocar dinamicamente essa string. Em seguida,
               o usuário deverá informar o conteúdo dessa string. O programa imprime
               a string sem suas vogais.
  Por Luís H.
*/
#include <stdio.h>
#include <stdlib.h>

void AlocarString(char *str, int i, int N);
int main()
{
    int i = 0, resultado;
    int N;
    char *str;

    printf("Digite o tamanho da string: ");
    scanf("%d", &N);
    printf("\n");
    

     //Alocando espaço para os inteiros
    str = (char*)malloc(N * sizeof(char));

    printf("Digite o conteudo da string: ");
    scanf(" %[^\n]", str); //Lê todos os caracteres até encontrar um \n

    /*mostrando a string sem vogais*/
    while(str[i] != '\0')
    {
        if(((str[i] != 'a') && (str[i] != 'A')) && ((str[i] != 'e') && (str[i] != 'E')) && ((str[i] != 'i') && (str[i] != 'I')) && ((str[i] != 'o') && (str[i]!= 	 'O')) && ((str[i] != 'u') && (str[i] != 'U')))
            printf("%c  ", str[i]);
            i++;
    }
    free(str);
    str = NULL;
    return 0;
}
