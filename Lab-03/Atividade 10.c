/*
    Atividade 10: Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.
    Por Luís H.
*/
#include <stdio.h>

int main() 
{
    int i;
    int soma = 0, contador = 0;;
    
    printf("----A soma dos 50 primeiros numeros pares----\n\n");
    
    for(contador = 1; contador <= 100; contador ++)
    {
		if(contador % 2 == 0) //se for par
		{
			soma += contador;
		}
	}
    printf("Soma = %d\n", soma);
    
    return 0;
}
