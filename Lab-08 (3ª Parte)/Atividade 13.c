/*
    Atividade 13: Faça um programa que possua uma função para:
                    - ler 2 notas e retorná-las por parâmetro (chamar uma função dedicada a ler
                      2 notas válidas e que devolver os 2 números lidos);
                    - calcular a média simples e a média ponderada e retorná-las por parâmetro,
                      onde a segunda nota tem peso 2: media_ponderada = (n1 + n2*2)/3
    Por Luís H.
*/
#include <stdio.h>

float mediaS(float *nt1, float *nt2);
float mediaP(float *nt1, float *nt2);
int main() 
{
    float nt1, nt2;
    float mediaSimples, mediaPonderada;
    
    printf("Digite a primeira nota: ");
    scanf("%f", &nt1);
    
    printf("Agora digite a segunda nota: ");
    scanf("%f", &nt2);
    
    mediaSimples = mediaS(&nt1, &nt2);
    mediaPonderada = mediaP(&nt1, &nt2);
    
    printf("Media Simples = %.2f\n", mediaSimples);
    printf("Media Ponderada = %.2f\n", mediaPonderada);
    return 0;
}

float mediaS(float *nt1, float *nt2)
{
    float media_simples;
    
    media_simples = (*(nt1) + *(nt2)) / 2;
    
    return media_simples;
}

float mediaP(float *nt1, float *nt2)
{
    float media_ponderada;
    
    media_ponderada = (*(nt1) + (*(nt2) *2)) / 3;
    
    return media_ponderada;
}
