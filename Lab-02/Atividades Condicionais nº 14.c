/*
  Atividade 14: A nota final de um estudante é calculada a partir de três notas atribuídas entre o intervalo
                de 0 até 10, respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um
                exame final. A média das três notas mencionadas anteriormente obedece aos pesos: Trabalho
                de Laboratório: 2; Avaliação Semestral: 3; Exame Final: 5. De acordo com o resultado, mostre na
                tela se o aluno está reprovado (média entre 0 e 2,9), de recuperação (entre 3 e 4,9) ou se foi
                aprovado. Faça todas as verificações necessárias.
  POR LUÍS H.
*/
#include <stdio.h>

int main()
{
    float notaT; //nota trabalho de laboratório
    float notaS; //nota avaliação semestral
    float notaEX; //nota exame final
    float notaFINAL; //nota final

    printf("Digite a nota obtida no TRABALHO DE LABORATORIO: ");
    scanf("%f", &notaT);

    printf("Digite a nota obtida na AVALIACAO SEMESTRAL: ");
    scanf("%f", &notaS);

    printf("Digite a nota obtida no EXAME FINAL: ");
    scanf("%f", &notaEX);

    notaFINAL = ((notaT *2) + (notaS * 3) + (notaEX * 5)) / 3;

    if(notaFINAL < 2.9)
    {
        printf("ALUNO REPROVADO\n", notaFINAL);
    }
    else if ((notaFINAL >= 3) || (notaFINAL < 4.9))
    {
        printf("ALUNO DE RECUPERACAO\n", notaFINAL);
    }
    else
    {
        printf("ALUNO APROVADO\n", notaFINAL);
    }
    return 0;
}
