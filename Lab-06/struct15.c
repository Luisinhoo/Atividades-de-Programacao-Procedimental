/*
   Atividade 15: Faça um programa que leia um vetor com dados de 5 livros: título (máximo 30 letras), autor 
                 (máximo 15  letras)  e  ano. Procure  um  livro  por  título,  perguntando  ao  usuário qual  título 
                 deseja buscar. Mostre os dados de todos os livros encontrados.
   Por Luís H.

*/
#include <stdio.h>
#include <string.h>

struct Livro
{
  char titulo[30];
  char autor[15];
  int ano;
};
typedef struct Livro DadosLivros;

int main()
{
  DadosLivros livros[5];
  int i;
  
  for(i = 0; i < 5; i++)
  {
    printf("Digite o título do %dº livro: ", i + 1);
    setbuf(stdin, NULL);
    fgets(livros[i].titulo, 30, stdin); 
    
    printf("Digite o autor do %dº livro: ", i + 1);
    setbuf(stdin, NULL);
    fgets(livros[i].autor, 15, stdin);   
    
    printf("Digite o ano do %dº livro: ", i + 1);
    scanf("%d", &livros[i].ano);
    printf("\n");
  }

  
  printf("Digite o título do livro que deseja buscar: ");
  scanf("%s", livros[i].titulo);
  
  for(i = 0; i < 5; i++)
  {
    if (strcmp(livros[i].titulo, livros->titulo) == 0)
    {
      printf("Titulo: %s\nAutor: %s\nAno: %d\n\n", livros[i].titulo, livros[i].autor, livros[i].ano);
    }
  }
  return 0;
}
