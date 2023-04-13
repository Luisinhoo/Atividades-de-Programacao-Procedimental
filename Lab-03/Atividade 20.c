/*
  Atividade 20: Faça um programa que calcule a soma de todos os números primos abaixo de dois milhões.
  POR Luís H.
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int i, j, somaPrim = 2, raizQuad, primo;

    /*
        i -> Contador de 3 a 2000000 obs. (inicia no 3 pois o unico numero primo par é 2) e (conta de 2 em 2)
        j -> Contador de 1 ate o i (atual) para verificar quantos divisores tem o numero
        somaPrim -> soma dos primos (inicia no 2 pois o 2 é o unico numero primo par
        raizQuad -> calcula a raiz quadrada de i
        primo -> indica se o número é primo (1 = verdadeiro, 0 = falso)
    */

    for(i = 3; i <= 2000000; i += 2) 
    {
        primo = 1;
        raizQuad = (int)sqrt(i); //Só precisa checar até a raiz quadrada do número
        
        for(j = 3; j <= raizQuad; j += 2) 
        { 
            //Números ímpares só são divisíveis por ímpares
            if(i % j == 0) 
            {
                primo = 0;
                break;
            }
        }

        if(primo) 
        {
            somaPrim += i;
        }
    }

    printf("A soma dos numeros primos abaixo de 2 milhoes eh: %d\n\n", somaPrim);
    return 0;
}
