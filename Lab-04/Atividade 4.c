/*
    Atividade 4: Fa�a uma fun��o para verificar se um n�mero � um quadrado perfeito. Um quadrado
                 perfeito � um n�mero inteiro n�o negativo que pode ser expresso como o quadrado de
                 outro n�mero inteiro. Ex.: 1, 4, 9...

    Por Lu�s H.

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
    else //se n�o for quadrado perfeito, retorna -1
    {
        printf("Nao eh um quadrado perfeito!\n");
        return -1;
    }
}
