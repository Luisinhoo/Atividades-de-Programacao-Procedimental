/*
  Atividade 51: Escreva um programa que leia as coordenadas x e y de pontos no R²
                e calcule sua distância da origem (0, 0).
    Por Luís H.
*/
#include <stdio.h>
#include <math.h>

int main()
{
    float x; //coordenadas de x
    float xx; //coordenadas de x
    float y; //coordenadas de y
    float yy; //coordenadas de y
    float disto; //distância da origem

    printf("Digite as coordenadas de X¹ e x²: ");
    scanf("%f  %f", &x, &xx);

    printf("Agora digite as coordenadas de y¹ e y²: ");
    scanf("%f  %f", &y, &yy);

    disto = sqrt(pow((xx - x) , 2) + pow((yy - y) , 2));

    printf("A distancia da origem eh: %.2f\n", disto);
    return 0;
}
