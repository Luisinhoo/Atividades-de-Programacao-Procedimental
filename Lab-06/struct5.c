/*
   Atividade 5: Considerando a estrutura
                struct vetor 
                {
                    float a;
                    float b;
                    float c;
                };
                para representar um vetor no R 3 , implemente um programa que calcule a soma de dois
                vetores.
   Por Luís H.

*/
#include <stdio.h>

struct vetor 
{
    float a;
    float b;
    float c;
};
typedef struct vetor vetor;

int main()
{
    vetor vet1, vet2, vet3;

    printf("Digite o valor de A do primeiro vetor: ");
    scanf("%f", &vet1.a);
    printf("Digite o valor de a do segundo vetor: ");
    scanf("%f", &vet2.a);
    
    printf("Digite o valor de b do primeiro vetor: ");
    scanf("%f", &vet1.b);
    printf("Digite o valor de b do segundo vetor: ");
    scanf("%f", &vet2.b);
    
    printf("Digite o valor de c do primeiro vetor: ");
    scanf("%f", &vet1.c);
    printf("Digite o valor de c do segundo vetor: ");
    scanf("%f", &vet2.c);

    vet3.a = vet1.a + vet2.a;
    vet3.b = vet1.b + vet2.b;
    vet3.c = vet1.c + vet2.c;
    
    printf("Vetor 1 = (%.2f, %.2f, %.2f)\n", vet1.a, vet1.b, vet1.c);
    
    printf("Vetor 2 = (%.2f, %.2f, %.2f)\n", vet2.a, vet2.b, vet2.c);
    
    printf("Vetor 3 = (%.2f, %.2f, %.2f)\n", vet3.a, vet3.b, vet3.c);

    return 0;
}
