/*
  Atividade 21: Faça um programa que conte quantos números primos existentes entre a e b, onde a e b são
                números informados pelo usuário.
  POR Luís H.
*/
#include <stdio.h>

int main() 
{
    int a, b;
    int i = a;
    int cont = 0;
    int j = 1;
    int divisores = 0;
    
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);
    
    while(i <= b) 
    {
        while(j <= i) 
        {
            if(i % j == 0) 
            {
                divisores++;
            }
            j++;
        }
        
        if(divisores == 2) 
        {
            cont++;
        }
        i++;
    }
    printf("Existem %d numeros primos entre %d e %d\n", cont, a, b);
    return 0;
}
