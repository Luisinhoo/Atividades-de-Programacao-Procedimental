/*
    Atividade 9: Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação for
                 maior que 20% do salário imprima: “Empréstimo não concedido”, caso contrário imprima:
                 “Empréstimo concedido”

    Por Luís H.
*/
#include <stdio.h>

int main()
{
    float salario; //salário e um trabalhador
    float prestacao; //valor da prestação de um empréstimo

    printf("Digite o salario: R$");
    scanf("%f", &salario);

    printf("Agora digite o valor da prestacao do emprestimo: R$");
    scanf("%f", &prestacao);

    if(prestacao > (salario * 0.2))
    {
        printf("\nEmprestimo nao concedido!\n");
    }

    else
    {
        printf("\nEmprestimo concedido!\n");
    }
    return 0;
}
