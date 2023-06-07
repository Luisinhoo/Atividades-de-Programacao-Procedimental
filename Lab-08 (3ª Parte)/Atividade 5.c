/*
    Atividade 5: Escreva uma função que dado um número real passado como parâmetro,
                 retorne a parte inteira e a parte fracionária deste número. Escreva um
                 programa que chama esta função.
                
                    Protótipo: void frac(float num, int *inteiro, float *frac);
    Por Luís H.
*/
#include <stdio.h>
#include <math.h> //Para usar a função fabsf()

void frac(float num, int *inteiro, float *frac);
int main()
{
    float num, parteFrac;
    int parteInt;
    
    printf("Digite um numero real qualquer: ");
    scanf("%f", &num);
    
    frac(num, &parteInt, &parteFrac);
    
    printf("\nConvertendo...\n");
    printf("\n%.2f convertido para inteiro fica: %d\n", num, parteInt);
    printf("%.2f convertido para fracionario fica: %.2f\n", num, parteFrac);
    
    return 0;
}

void frac(float num, int *inteiro, float *frac) 
{
    *inteiro = (int) num;  //Obtém a parte inteira atribuindo o valor convertido para int
    
    *frac = fabsf(num - *inteiro);  //Calcula a parte fracionária utilizando a função fabsf()
    /*  A função fabsf()é uma função matemática da biblioteca math.h em C que retorna o valor 
        absoluto de um número em formato de float.
    */
}
