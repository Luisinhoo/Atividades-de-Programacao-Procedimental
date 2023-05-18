/*
   Atividade 7: Faça um programa que converta coordenadas polares para cartesianas:
		→ Crie e leia um ponto em coordenada polar, composto por raio (r) e argumento (a)
		  em radianos;
		→ Crie outro ponto, agora em coordenada cartesiana, composto por x e y, sabendo
		  que x = r * cos(a) e y = r * sin(a).
		  No programa principal, leia um ponto em coordenada polar e mostre as coordenadas do
		  ponto gerado no plano cartesiano.
   Por Luís H.
*/
#include <stdio.h>
#include <math.h>

struct PontoPolar 
{
    double raio;
    double argumento;
};

struct PontoCartesiano 
{
    double x;
    double y;
};

struct PontoCartesiano converterParaCartesiano(struct PontoPolar polar) 
{
    struct PontoCartesiano cartesiano;

    cartesiano.x = polar.raio * cos(polar.argumento);
    cartesiano.y = polar.raio * sin(polar.argumento);

    return cartesiano;
}

int main() 
{
    struct PontoPolar polar;
    struct PontoCartesiano cartesiano;

    printf("Digite as coordenadas polares (raio e argumento em radianos):\n");
    printf("Raio: ");
    scanf("%lf", &polar.raio);
    printf("\n");
    printf("Argumento: ");
    scanf("%lf", &polar.argumento);

    cartesiano = converterParaCartesiano(polar);

    printf("\n");
    printf("Coordenadas cartesianas:\n");
    printf("x: %.2lf\n", cartesiano.x);
    printf("y: %.2lf\n", cartesiano.y);

    return 0;
}
