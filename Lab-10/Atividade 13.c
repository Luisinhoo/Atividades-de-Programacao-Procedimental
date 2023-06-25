/*
    Atividade 13: Faça um programa que permita que o usuário entre com diversos nomes
                  e telefone para cadastro, e crie um arquivo com essas informações, uma
                  por linha. O usuário finaliza a entrada com ‘0’ para o telefone.
    Por Luís H.
*/
#include <stdio.h>
#include <stdlib.h>

int main() 
{
    char nome[100];
    char telefone[20];
    FILE *arquivo;

    arquivo = fopen("cadastro.txt", "w");

    if (arquivo == NULL) 
    {
        printf("Nao foi possivel criar o arquivo!\n");
        exit(1);
    }

    while(1) 
    {
        printf("Digite o nome (ou 0 para sair): ");
        scanf("%s", nome);

        if (nome[0] == '0') 
        {
            break;
        }

        printf("Digite o telefone: ");
        scanf("%s", telefone);

        if (telefone[0] == '0') 
        {
            break;
        }

        fprintf(arquivo, "%s %s\n", nome, telefone);
    }

    fclose(arquivo);

    printf("Cadastro concluido. As informações foram salvas no arquivo 'cadastro.txt'.\n");

    return 0;
}
