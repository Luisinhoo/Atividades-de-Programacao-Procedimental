/*
  Atividade 39: Uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela que
                considera o salário atual e o tempo de serviço de cada funcionário. Os funcionários com menor
                salário terão um aumento proporcionalmente maior do que os funcionários com um salário
                maior, e conforme o tempo de serviço na empresa, cada funcionário irá receber um bônus
                adicional de salário. Faça um programa que leia:
                      -> o valor do salário atual do funcionário;
                      -> o tempo de serviço desse funcionário na empresa (número de anos de trabalho na empresa).
                Use as tabelas abaixo para calcular o salário reajustado deste funcionário e imprima o valor do
                salário final reajustado, ou uma mensagem caso o funcionário não tenha direito a nenhum aumento.

                    Salário Atual | Reajuste (%) |  Tempo de Serviço | Bônus
                      Até 500,00  |    25%       |    Abaixo de 1 ano| Sem bônus
                       Até 1000,00|     20%      |     De 1 a 3 anos | 100,00
                       Até 1500,00|     15%      |     De 4 a 6 anos | 200,00
                       Até 2000,00|     10%      |     De 7 a 10 anos| 300,00
                  Acima de 2000,00| Sem reajuste |    Mais de 10 anos| 500,00
  POR LUÍS H.
*/
#include <stdio.h>

int main()
{
    float sal; //salário
    float reaj; //reajuste
    float bonus;
    float salr; //salário reajustado

    int temp; //tempo

    printf("Digite o salario atual do funcionario: ");
    scanf("%f", &sal);

    printf("Digite o tempo de servico do funcionario(em anos): ");
    scanf("%d", &temp);

    if (sal <= 500.0)
    {
        reaj = 0.25;
    }
    else if (sal <= 1000.0)
    {
        reaj = 0.20;
    }
    else if (sal <= 1500.0)
    {
        reaj = 0.15;
    }
    else if (sal <= 2000.0)
    {
        reaj = 0.10;
    }
    else
    {
        reaj = 0.0;
    }

    if (temp < 1)
    {
        bonus = 0.0;
    }
    else if (temp <= 3)
    {
        bonus = 100.0;
    }
    else if (temp <= 6)
    {
        bonus = 200.0;
    }
    else if (temp <= 10)
    {
        bonus = 300.0;
    }
    else
    {
        bonus = 500.0;
    }

    salr = sal * (1 + reaj) + bonus;

    printf("O salario reajustado eh: R$%.2f\n", salr);

    return 0;
}
