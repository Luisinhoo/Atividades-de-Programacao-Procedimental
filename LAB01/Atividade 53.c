/*
  Atividade 53: Faça um programa para ler as dimensões de um terreno (comprimento c e largura l), bem
                como o preço do metro de tela p. Imprima o custo para cercar este mesmo terreno com tela.
  POR LUÍS H.
*/
#include <stdio.h>

int main()
{
    float c; //comprimento
    float l; //largura
    float custo;
    float pmtp; //preço do metro de tela p


    printf("Digite as dimensoes do terreno em comprimento e largura: ");
    scanf("%f %f", &c, &l);

    printf("Agora digite o preço do metro de tela: ");
    scanf("%f", &pmtp);

    custo = c + l;
    pmtp = custo * pmtp;

    printf("O custo vai ser de: %.2f\n", pmtp);
    return 0;
}
