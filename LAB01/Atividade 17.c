/*
    Atividade 17: Leia um valor de comprimento em centímetros e apresente-o convertido em polegadas. A
                  fórmula de conversão é: P = C/2.54, sendo C o comprimento em centímetros e P o comprimento
                  em polegadas.
    Por Luís H.
*/
#include <stdio.h>

int main()
{ 
    float C; //comprimento em centímetros
    float P; //comprimento em polegadas
    
    printf("Digite um comprimento em CENTIMETROS: ");
    scanf("%f", &C);
    
    P = C / 2.54;
    
    printf("Esse comprimento em POLEGADAS eh: %.2f\n", P);
    return 0;
}
