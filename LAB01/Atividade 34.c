/*
   Atividade 34: Leia o valor do raio de um círculo e calcule e imprima a área do círculo correspondente. A
                 área do círculo é pi*raio², considere pi = 3.141592.
   Por Luís H.
*/
#include <stdio.h>

int main()
{
    int RC; //raio de um círculo
    int ACR; //área círculo correspondente

    float pi = 3.141592; //pi e seu valor

    printf("Digite o valor do RAIO DO CIRCULO: ");
    scanf("%d", &RC);

    ACR = pi * (RC * RC);

    printf("A area eh: %d\n", ACR);
    return 0;
}
