/*
  Atividade 34: Leia a nota e o número de faltas de um aluno, e escreva seu conceito. De acordo com a tabela
                abaixo, quando o aluno tem mais de 20 faltas ocorre uma redução de conceito.

                   NOTA | CONCEITO (ATÉ 20 FALTAS) | CONCEITO (MAIS DE 20 FALTAS)
            9.0 até 10.0|              A           |             B
           7.5 até 8.9  |              B           |             C
           5.0 até 7.4  |              C           |             D
           4.0 até 4.9  |              D           |             E
           0.0 até 3.9  |              E           |             E
  POR LUÍS H.
*/
#include <stdio.h>

int main()
{
    int numf; //número de faltas
    float nt; //nota

    printf("Digite sua nota: ");
    scanf("%f", &nt);

    printf("Agora digite sua quantidade de faltas: ");
    scanf("%d", &numf);

    if((nt >= 9.0) && (nt <= 10.0) && (numf <= 20))
    {
        printf("Conceito: A\n");
    }
    else if((nt >= 7.5) && (nt <= 8.9) && (numf <= 20))
    {
       printf("Conceito: B\n");
    }
    else if((nt >= 5.0) && (nt <= 7.5) && (numf <= 20))
    {
       printf("Conceito: C\n");
    }
    else if((nt >= 4.0) && (nt <= 4.9) && (numf <= 20))
    {
        printf("Conceito: D\n");
    }
    else if((nt >= 0.0) && (nt <= 3.9) && (numf <= 20))
    {
        printf("Conceito: E\n");
    }

      if((nt >= 9.0) && (nt <= 10.0) && (numf > 20))
    {
        printf("Conceito: B\n");
    }
    else if((nt >= 7.5) && (nt <= 8.9) && (numf > 20))
    {
       printf("Conceito: C\n");
    }
    else if((nt >= 5.0) && (nt <= 7.5) && (numf > 20))
    {
       printf("Conceito: D\n");
    }
    else if((nt >= 4.0) && (nt <= 4.9) && (numf > 20))
    {
        printf("Conceito: E\n");
    }
    else if((nt >= 0.0) && (nt <= 3.9) && (numf > 20))
    {
        printf("Conceito: E\n");
    }
    else
    {
        printf("Dados invalidos\n");
    }
    return 0;
}
