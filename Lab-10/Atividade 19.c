/*
    Atividade 19: Faça um programa que receba do usuário um arquivo que contenha o
                  nome e a nota de diversos alunos (da seguinte forma: NOME: JOÃO
                  NOTA: 8), um aluno por linha. Mostre na tela o nome e a nota do aluno
                  que possui a maior nota.
    Por Luís H.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    FILE *file;
    char nome[100];
    float nota, maiorNota = 0;
    char alunoMaiorNota[100];

    //Abrir o arquivo para leitura
    file = fopen("alunos.txt", "r");

    if(file == NULL) 
    {
        printf("Erro ao abrir o arquivo!\n");
        exit(1);
    }

    //Ler o arquivo linha por linha
    while (fscanf(file, "NOME: %[^\n]s", nome) == EOF) 
    {
        //Ignorar o restante da linha
        fscanf(file, "%*[^\n]");

        //Ler a nota
        fscanf(file, "NOTA: %f", &nota);
        
        //Ignorar o restante da linha
        fscanf(file, "%*[^\n]");

        //Verificar se a nota é maior do que a maior nota atual
        if(nota > maiorNota) 
        {
            maiorNota = nota;
            strcpy(alunoMaiorNota, nome);
        }
    }

    fclose(file);

    printf("Aluno com a maior nota:\n");
    printf("Nome: %s\n", alunoMaiorNota);
    printf("Nota: %.2f\n", maiorNota);

    return 0;
}
