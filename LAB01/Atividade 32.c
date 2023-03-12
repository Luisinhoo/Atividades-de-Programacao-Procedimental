/*
   Atividade 32: Leia um número inteiro e imprima a soma do sucessor de seu triplo com o antecessor de seu
                dobro.
    Por Luís H.
*/
#include <stdio.h>

int main()
{
    int n; //número
    int ant; //antecessor
    int suc; //sucessor
    int soma;

    printf("Digite um numero inteiro qualquer: ");
    scanf("%d", &n);

    ant = n - 1;
    suc = n + 1;

    ant = ant * ant * ant;

    suc = suc * suc;

    soma = ant + suc;

    printf("Resultado: %d\n", soma);
    return 0;
}
