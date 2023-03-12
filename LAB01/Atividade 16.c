/*
   Atividade 16:Leia um valor de comprimento em polegadas e apresente-o convertido em centímetros. A
                fórmula de conversão é: C = P*2.54, sendo C o comprimento em centímetros e P o comprimento
                em polegadas.
    Por Luís H.
*/
#include <stdio.h>

int main()
{ 
    float P; //comprimento em polegadas
    float C; //comprimento em centímetros
    
    printf("Digite um comprimento em POLEGADAS: ");
    scanf("%f", &P);
    
    C = P * 2.54;
    
    printf("Esse comprimento em CENTIMETROS eh: %.2f\n", C);
    return 0;
}
