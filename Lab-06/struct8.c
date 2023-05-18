/*
   Atividade 8: Faça um programa que armazene em um registro de dados (estrutura composta) os dados
                de um funcionário de uma empresa, compostos de: Nome, Idade, Sexo (M/F), CPF, Data de
                Nascimento, Código do Setor onde trabalha (0-99), Cargo que ocupa (string de até 30
                caracteres) e Salário. Os dados devem ser digitados pelo usuário, armazenados na estrutura
                e exibidos na tela.
   Por Luís H.

*/
#include <stdio.h>

struct Data 
{
  int dia;
  int mes;
  int ano;
};

struct Funcionario 
{
  char nome[40];
  int idade;
  char sexo;
  char cpf[12];
  struct Data data_nascimento;
  int codigo;
  char cargo[30];
  float salario;
};
typedef struct Funcionario Funcionario;

int main() 
{
  Funcionario X;

  printf("Digite o nome do funcionario: ");
  setbuf(stdin, NULL);
  fgets(X.nome, 100, stdin);  

  printf("Digite a idade do funcionario: ");
  scanf("%d", &X.idade);

  printf("Digite o sexo do funcionario(M/F): ");
  scanf(" %c", &X.sexo);  

  printf("Digite o dia de nascimento do funcionario: ");
  scanf("%d", &X.data_nascimento.dia);
  
  printf("Digite o mês de nascimento do funcionario: ");
  scanf("%d", &X.data_nascimento.mes);
  
  printf("Digite o ano de nascimento do funcionario: ");
  scanf("%d", &X.data_nascimento.ano);
  
  printf("Digite o CPF do funcionario: ");
  setbuf(stdin, NULL);
  fgets(X.cpf, 12, stdin);

  printf("Digite o codigo do setor do funcionario: ");
  scanf("%d", &X.codigo);

  printf("Digite o cargo do funcionario: ");
  setbuf(stdin, NULL);
  fgets(X.cargo, 30, stdin);  

  printf("Digite o salario do funcionario: ");
  scanf("%f", &X.salario);

  printf("================================================");

  printf("Nome: %s\n", X.nome);
  printf("Idade: %d\n", X.idade);
  printf("Sexo: %c\n", X.sexo);
  printf("CPF: %s\n", X.cpf);
  printf("Data de nascimento: %d/%d/%d\n", X.data_nascimento.dia, X.data_nascimento.mes, X.data_nascimento.ano);
  printf("Codigo do setor: %d\n", X.codigo);
  printf("Cargo: %s\n", X.cargo);
  printf("Salario: %.2f\n", X.salario);  
}
