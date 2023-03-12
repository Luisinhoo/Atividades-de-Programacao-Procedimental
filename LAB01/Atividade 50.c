/*
  Atividade 50: Implemente um programa que calcule o ano de nascimento de uma pessoa a partir de sua
                idade e do ano atual.
    Por Luís H.
*/
#include <stdio.h>

int main()
{

    int ano; //ano atual
    int anon; //ano do nascimento
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("digite o ano atual: ");
    scanf("%d", &ano);

    anon = ano - idade;

    printf("Nasceu em: %d\n",anon);
    return 0;
}
