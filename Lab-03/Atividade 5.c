/*
    Atividade 5: Faça um programa que peça ao usuário para digitar 10 valores e some-os.
    Por Luís H.

*/
#include <stdio.h>

int main()
{
    int num, soma = 0;
    int i;
    
    printf("SOMAR NUMEROS\n");
    for(i = 0; i < 10; i++)
    {
        printf("Digite o %dº numero: ", i+1);
        scanf("%d", &num);
        
        //somando
        soma += num;
    }
    printf("Soma = %d\n", soma);
    
    return 0;
}
