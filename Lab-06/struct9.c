/*
   Atividade 9: Faça um programa que faca operações simples de números complexos:
			→ Crie e leia dois números complexos z e w, compostos por parte real e parte imaginária;
			→ Apresente a soma, subtração e produto entre z e w, nessa ordem, bem como o módulo
 			  de ambos.
   Por Luís H.
*/
#include <stdio.h>
#include <math.h>

struct Complexo 
{
    double parteReal;
    double parteImaginaria;
};

struct Complexo somar(struct Complexo z, struct Complexo w) 
{
    struct Complexo resultado;
    resultado.parteReal = z.parteReal + w.parteReal;
    resultado.parteImaginaria = z.parteImaginaria + w.parteImaginaria;
    
    return resultado;
}

struct Complexo subtrair(struct Complexo z, struct Complexo w) 
{
    struct Complexo resultado;
    resultado.parteReal = z.parteReal - w.parteReal;
    resultado.parteImaginaria = z.parteImaginaria - w.parteImaginaria;
    
    return resultado;
}

struct Complexo multiplicar(struct Complexo z, struct Complexo w) 
{
    struct Complexo resultado;
    resultado.parteReal = z.parteReal * w.parteReal - z.parteImaginaria * w.parteImaginaria;
    resultado.parteImaginaria = z.parteReal * w.parteImaginaria + z.parteImaginaria * w.parteReal;
    
    return resultado;
}

double calcularModulo(struct Complexo z)  //responsável por calcular "sqrt(parteReal² + parteImaginaria²)"
{
    return sqrt(z.parteReal * z.parteReal + z.parteImaginaria * z.parteImaginaria);
}

int main() 
{
    struct Complexo z, w;
    struct Complexo resultado;
    double moduloZ, moduloW;

    printf("Digite o primeiro numero complexo:\n");
    printf("Parte Real: ");
    scanf("%lf", &z.parteReal);
    printf("Parte Imaginaria: ");
    scanf("%lf", &z.parteImaginaria);

    printf("\n");

    printf("Digite o segundo numero complexo:\n");
    printf("Parte Real: ");
    scanf("%lf", &w.parteReal);
    printf("Parte Imaginaria: ");
    scanf("%lf", &w.parteImaginaria);

    printf("\n");

    resultado = somar(z, w);
    printf("Soma: %.2lf + %.2lfi\n", resultado.parteReal, resultado.parteImaginaria);

    resultado = subtrair(z, w);
    printf("Subtracao: %.2lf + %.2lfi\n", resultado.parteReal, resultado.parteImaginaria);

    resultado = multiplicar(z, w);
    printf("Multiplicacao: %.2lf + %.2lfi\n", resultado.parteReal, resultado.parteImaginaria);

    moduloZ = calcularModulo(z);
    printf("Modulo de z: %.2lf\n", moduloZ);

    moduloW = calcularModulo(w);
    printf("Modulo de w: %.2lf\n", moduloW);

    return 0;
}

