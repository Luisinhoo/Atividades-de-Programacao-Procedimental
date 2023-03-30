/*
    Atividade 8:    Faça um programa que leia 2 notas de um aluno, verifique se as notas são válidas e exiba na
                    tela a média destas notas. Uma nota válida deve ser, obrigatoriamente, um valor entre 0.0 e
                    10.0, onde caso a nota não possua um valor válido, este fato deve ser informado ao usuário e o
                    programa termina.
    Por Luís H.
*/
#include <stdio.h>

int main()
{
    float nota1, nota2;
    float media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Agora digite a segunda nota: ");
    scanf("%f", &nota2);

    //verificando se a nota é válida
    if((nota1 >= 0) && (nota1 <= 10) && (nota2 >= 0) && (nota2 <= 10))
    {
        media = (nota1 + nota2) / 2;
        printf("Media = %.1f\n", media);
    }

    else
    {
        printf("Notas invalidas!\n");
    }
    return 0;
}
