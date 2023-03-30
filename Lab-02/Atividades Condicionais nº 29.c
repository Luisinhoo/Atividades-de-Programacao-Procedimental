/*
 Atividade 29:  Faça uma prova de matemática para crianças que estão aprendendo a somar números
                inteiros menores do que 100. Escolha números aleatórios entre 1 e 100, e mostre na tela a
                pergunta: qual é a soma de a + b, onde a e b são os números aleatórios. Peça a resposta. Faça
                cinco perguntas ao aluno, e mostre para ele as perguntas e as respostas corretas, além de
                quantas vezes o aluno acertou.
 POR LUÍS H.
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    int b;
    int acertos;
    int perguntas;

    switch(perguntas)
    {
        case 1:
                 a = (rand() % 100) + 1;
                 b = (rand() % 100) + 1;
                 printf("Pergunta 1: a + b = ?\n", perguntas);
                 break;

        case 2:
                 a = (rand() % 100) + 1;
                 b = (rand() % 100) + 1;
                 printf("Pergunta 2: a + b = ?\n", perguntas);
                 break;

        case 3:
                 a = (rand() % 100) + 1;
                 b = (rand() % 100) + 1;
                 printf("Pergunta 3: a + b = ?\n", perguntas);
                 break;

        case 4:
                 a = (rand() % 100) + 1;
                 b = (rand() % 100) + 1;
                 printf("Pergunta 4: a + b = ?\n", perguntas);
                 break;

        case 5:
                 a = (rand() % 100) + 1;
                 b = (rand() % 100) + 1;
                 printf("Pergunta 5: a + b = ?\n", perguntas);
                 break;

        default:
                 perguntas = acertos;
                 printf("Acertou: %d\n", acertos);
    }
    return 0;
}
