/*
    Atividade 3: Faça uma função para verificar se um número é positivo ou negativo. Sendo que o valor de
                 retorno será 1 se positivo, -1 se negativo e 0 se for igual a 0.

    Por Luís H.

*/
#include <stdio.h>

int verificaNum(float num);
int main()
{
    float num;

    printf("Digite um numero qualquer: ");
    scanf("%f", &num);

    verificaNum(num);
}

//função que verifica se o numero digitado é positivo ou negativo
int verificaNum(float num)
{
    if(num < 0) //se for negativo, retorna -1
    {
        printf("Este numero eh negativo!\n");
        return -1;
    }
    else if(num > 0)//se for positivo, retorna 1
    {
        printf("Este numero eh positivo!\n");
        return 1;
    }
    else if(num == 0)//se for 0, retorna 0
    {
        printf("Este numero eh %.f!\n", num);
        return 0;
    }
}
