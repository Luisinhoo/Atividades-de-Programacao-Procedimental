/*
   Atividade 13: Peça ao usuário para digitar seus dados pessoais (Nome, Endereço, Data de Nascimento,
		 Cidade, CEP, e-mail), verifique se as informações de Data de Nascimento, CEP e e-mail fazem
		 sentido, e mostre ao usuário as informações, se estão todas corretas, ou mostre que alguma
		 informação estava errada.
   Por Luís H.
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Função para verificar se a data de nascimento é válida
bool validarDataNascimento(const char *data) 
{
    // Retorna true se for válida, ou false caso contrário
}

// Função para verificar se o CEP é válido
bool validarCEP(const char *cep) 
{
    // Retorna true se for válido, ou false caso contrário
}

// Função para verificar se o e-mail é válido
bool validarEmail(const char *email) 
{
    // Retorna true se for válido, ou false caso contrário
}

int main() 
{
    char nome[100];
    char endereco[100];
    char dataNascimento[11];
    char cidade[100];
    char cep[9];
    char email[100];

    // Solicitar dados pessoais ao usuário
    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    printf("Digite seu endereço: ");
    fgets(endereco, sizeof(endereco), stdin);
    printf("Digite sua data de nascimento (formato dd/mm/aaaa): ");
    fgets(dataNascimento, sizeof(dataNascimento), stdin);
    printf("Digite sua cidade: ");
    fgets(cidade, sizeof(cidade), stdin);
    printf("Digite seu CEP: ");
    fgets(cep, sizeof(cep), stdin);
    printf("Digite seu e-mail: ");
    fgets(email, sizeof(email), stdin);

    // Remover caracteres de nova linha (\n) das strings
    nome[strcspn(nome, "\n")] = '\0';
    endereco[strcspn(endereco, "\n")] = '\0';
    dataNascimento[strcspn(dataNascimento, "\n")] = '\0';
    cidade[strcspn(cidade, "\n")] = '\0';
    cep[strcspn(cep, "\n")] = '\0';
    email[strcspn(email, "\n")] = '\0';

    // Verificar se as informações são válidas
    bool dadosCorretos = true;

    if(!validarDataNascimento(dataNascimento)) 
    {
        printf("Data de Nascimento inválida\n");
        dadosCorretos = false;
    }

    else if(!validarCEP(cep)) 
    {
        printf("CEP inválido\n");
        dadosCorretos = false;
    }

    else if(!validarEmail(email)) 
    {
        printf("Email invalido\n");
        dadosCorretos = false;
    }

    // Exibir informações se tudo estiver correto
    else if(dadosCorretos) 
    {
        printf("\n--- Dados pessoais ---\n");
        printf("Nome: %s\n", nome);
        printf("Endereco: %s\n", endereco);
        printf("Data de Nascimento: %s\n", dataNascimento);
        printf("Cidade: %s\n", cidade);
        printf("CEP: %s\n", cep);
        printf("Email: %s\n", email);
    } 
    else 
    {
        printf("\nAlguma informação esta incorreta. Verifique seus dados.\n");
    }

    return 0;
}
