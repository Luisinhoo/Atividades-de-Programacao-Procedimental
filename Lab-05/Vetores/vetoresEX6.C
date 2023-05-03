/*
	VETORES 
	
    Atividade 6 de VETORES: Leia 10 números inteiros e armazene em um vetor. Em seguida escreva os elementos que
                            são primos e suas respectivas posições no vetor.
    POR LUÍS H.
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int vet[10] = {33, 59, 87, 22, 13, 16, 78, 98, 100, 64};
    int d, i, limite;
    int verifica;

    verifica = 1;

    for(i = 0; i < 10; i++)
    {
        if (vet[i] > 1)
        {
            d = 2;
            verifica = 1;
            limite = sqrt(vet[i]);

            while((verifica) && d <= (limite))
             {
                if (vet[i] % d  == 0)
                {
                    verifica = 0;
                }

                d++;
             }

            if (verifica)
            {
                printf("O numero %d na posicao n[%d] eh primo!\n", vet[i], i);
            }
        }
    }
    return 0;
}
