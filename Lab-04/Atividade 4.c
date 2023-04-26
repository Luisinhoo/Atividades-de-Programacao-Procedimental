/*
    Atividade 4: Faça uma função para verificar se um número é um quadrado perfeito. Um quadrado
                 perfeito é um número inteiro não negativo que pode ser expresso como o quadrado de
                 outro número inteiro. Ex.: 1, 4, 9...

    Por Luís H.

*/
#include <stdio.h>

int verificaQuadradoP(int num);
int main()
{
    int num;
    int resultado;

    printf("Digite um numero inteiro qualquer: ");
    scanf("%d", &num);

    resultado = verificaQuadradoP(num); //verificaQuadradoP = Verificar se eh um quadrado perfeito
    return 0;
}

int verificaQuadradoP(int num)
{
    int i;

    for(i = 0; (i*i)< num; i++)

    if((i*i) == num) //se for quadrado perfeito, retorna 1
    {
        printf("Eh um quadrado perfeito!\n");
        return 1;
    }
    else //se não for quadrado perfeito, retorna -1
    {
        printf("Nao eh um quadrado perfeito!\n");
        return -1;
    }
}
