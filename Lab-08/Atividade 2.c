/*
    Atividade 2: Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro,
                 real e char. Associe as variáveis aos ponteiros (use &). Modifique os valores de cada variável 
                 usando os ponteiros. Imprima os valores das variáveis antes e após a modificação.
    Por Luís H.
*/
#include <stdio.h>

int main()
{
    int a = 10;
    float b = 3.14;
    char c = 'A';

    int *A;
    float *B;
    char *C;

    A = &a;
    B = &b;
    C = &c;

    printf("Valores antes da modificacao:\n");
    printf("Inteiro: %d\n", a);
    printf("Real: %.2f\n", b);
    printf("Char: %c\n", c);

    //Modificando os valores atraves dos ponteiros
    *A = 20;
    *B = 2.71;
    *C = 'B';

    printf("\nValores apos a modificacao:\n");
    printf("Inteiro: %d\n", a);
    printf("Real: %.2f\n", b);
    printf("Char: %c\n", c);
    
    return 0;
}
