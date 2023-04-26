/*
  Atividade 20: Escreva uma função para determinar a quantidade de números primos abaixo de N.
  Por Luís H.
*/
#include <stdio.h>

int Eh_Primo(int n);
int contadorPrimos(int n);
int main() 
{
    int n;
    
    printf("Digite um valor para N: ");
    scanf("%d", &n);
    
    printf("Quantidade de numeros primos abaixo de %d eh %d\n", n, contadorPrimos(n));
    return 0;
}

int Eh_Primo(int n)
{
    int i;
    
    if(n <= 1) 
    {
        return 0;
    }
    for(i = 2; i*i <= n; i++) 
    {
        if(n % i == 0) 
        {
            return 0;
        }
    }
    return 1;
}

int contadorPrimos(int n) 
{
    int contador = 0;
    int i;
    
    for(i = 2; i < n; i++) 
    {
        if (Eh_Primo(i)) 
        {
            contador++;
        }
    }
    return contador;
}
