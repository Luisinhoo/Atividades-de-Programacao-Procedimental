/*
  Atividade 13: Faça um algoritmo que calcule a média ponderada das notas de 3 provas. A primeira e a
                segunda prova têm peso 1 e a terceira tem peso 2. Ao final, mostrar a média do estudante e
                indicar se o estudante foi aprovado ou reprovado. A nota para aprovação deve ser igual ou
                superior a 60 pontos.
  POR LUÍS H.
*/
#include <stdio.h>

int main()
{
    float pv1; //primeira prova
    float pv2; //segunda prova
    float pv3; //terceira prova
    float media; //média do estudante

    printf("Digite a nota da primeira prova: ");
    scanf("%f", &pv1);

    printf("Agora digite a nota da segunda prova: ");
    scanf("%f", &pv2);

    printf("Para finalizar, digite a nota da terceira prova: ");
    scanf("%f", &pv3);

    media = ((1 * pv1) +  (1 * pv2) + (2 * pv3)) /3;

    if(media >= 60)
    {
        printf("Estudante aprovado\n", media);
    }
    else
    {
        printf("Estudante reprovado\n", media);
    }

    return 0;
}
