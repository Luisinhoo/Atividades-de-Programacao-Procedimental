/*
   Atividade 2: Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene
                os dados em uma estrutura.
   Por Luís H.                
*/
#include <stdio.h>
#include <string.h>

struct Pessoa 
{
    char nome[100];
    char endereco[100];
    int idade;
};
typedef struct Pessoa DadosP; //DadosP = Dados de uma pessoa

int main() 
{
    DadosP pessoa;
    
    printf("Digite o seu nome: ");
    fgets(pessoa.nome, 100, stdin);
    pessoa.nome[strcspn(pessoa.nome, "\n")] = '\0';  //Remove o caractere '\n' adicionado pelo fgets
    
    printf("Digite a sua idade: ");
    scanf("%d", &pessoa.idade);
    
    printf("Digite o seu endereco: ");
    getchar();  //Consome o caractere '\n' deixado pelo scanf
    fgets(pessoa.endereco, 100, stdin);
    pessoa.endereco[strcspn(pessoa.endereco, "\n")] = '\0';  //Remove o caractere '\n' adicionado pelo fgets
    
    printf("\n");
    printf("Dados da pessoa:\n");
    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d anos\n", pessoa.idade);
    printf("Endereco: %s\n", pessoa.endereco);
    return 0;
}
